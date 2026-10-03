#include <iostream>
#include <string>
using namespace std;

struct Product
{
  int ID, quantity;
  string name;
  double price;
};


int main() {
  int N, num;
  cin >> N;
  Product arr[100];

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i].ID >> arr[i].name >> arr[i].price >> arr[i].quantity;
  }
  do
  {
    cout << "1. Display All Products \n";
    cout << "2. Search Product \n";
    cout << "3. Most Expensive Product \n";
    cout << "4. Inventory Value \n";
    cout << "5. Update Quantity \n";
    cout << "6. Update Price \n";
    cout << "7. Display Available Products \n";
    cout << "8. Exit \n";

    cin >> num;

    switch (num)
    {
    case 1:
    {
      for (int i = 0; i < N; i++)
      {
        cout << "ID: " << arr[i].ID << endl;
        cout << "Name: " << arr[i].name << endl;
        cout << "Price: " << arr[i].price << endl;
        cout << "Quantity: " << arr[i].quantity << endl;
        cout << "------------------" << endl;
      }
      break;
    }

    case 2:
    {
      int SearchID, found = 0;
      cout << "Enter the ID of the product you are looking for: ";
      cin >> SearchID;
      for (int i = 0; i < N; i++)
      {
        if (SearchID == arr[i].ID)
        {
          cout << "Product Found \n";
          cout << "ID: " << arr[i].ID << endl;
          cout << "Name: " << arr[i].name << endl;
          cout << "Price: " << arr[i].price << endl;
          cout << "Quantity: " << arr[i].quantity << endl;
          cout << "------------------" << endl;
          found = 1;
          break;
        }
      }
      if (found == 0)
      {
        cout << "Product Not Found\n";
      }
      break;
    }

    case 3:
    {
      int maxIndex = 0;
      for (int i = 1; i < N; i++)
      {
        if (arr[maxIndex].price < arr[i].price)
        {
          maxIndex = i;
        }
      }
      cout << "ID: " << arr[maxIndex].ID << endl;
      cout << "Name: " << arr[maxIndex].name << endl;
      cout << "Price: " << arr[maxIndex].price << endl;
      cout << "Quantity: " << arr[maxIndex].quantity << endl;
      cout << "------------------" << endl;
      break;
    }

    case 4:
    {
      double total = 0;
      for (int i = 0; i < N; i++)
      {
        total += arr[i].price * arr[i].quantity;
      }
      cout << "Total Inventory Value: " << total << endl;
      break;
    }

    case 5:
    {
      int SearchID, found = 0, NewQuantity;
      cout << "Enter the ID of the product you are looking for: ";
      cin >> SearchID;
      for (int i = 0; i < N; i++)
      {
        if (SearchID == arr[i].ID)
        {
          SearchID = i;
          found = 1;
          break;
        }
      }
      if (found == 1)
      {
        cout << "Enter the new quantity for this product: ";
        cin >> NewQuantity;
        arr[SearchID].quantity = NewQuantity;
        cout << "Product Found \n";
        cout << "ID: " << arr[SearchID].ID << endl;
        cout << "Name: " << arr[SearchID].name << endl;
        cout << "Price: " << arr[SearchID].price << endl;
        cout << "Quantity: " << arr[SearchID].quantity << endl;
        cout << "------------------" << endl;
      }
      if (found == 0)
      {
        cout << "Product Not Found\n";
      }
      break;
    }

    case 6:
    {
      int SearchID, found = 0;
      double NewPrice;
      cout << "Enter the ID of the product you are looking for: ";
      cin >> SearchID;
      for (int i = 0; i < N; i++)
      {
        if (SearchID == arr[i].ID)
        {
          SearchID = i;
          found = 1;
          break;
        }
      }
      if (found == 1)
      {
        cout << "Enter the new price for this product: ";
        cin >> NewPrice;
        arr[SearchID].price = NewPrice;
        cout << "Product Found \n";
        cout << "ID: " << arr[SearchID].ID << endl;
        cout << "Name: " << arr[SearchID].name << endl;
        cout << "Price: " << arr[SearchID].price << endl;
        cout << "Quantity: " << arr[SearchID].quantity << endl;
        cout << "------------------" << endl;
      }
      if (found == 0)
      {
        cout << "Product Not Found\n";
      }
      break;
    }

    case 7:
    {
      for (int i = 0; i < N; i++)
      {
        if (arr[i].quantity > 0)
        {
          cout << "ID: " << arr[i].ID << endl;
          cout << "Name: " << arr[i].name << endl;
          cout << "Price: " << arr[i].price << endl;
          cout << "Quantity: " << arr[i].quantity << endl;
          cout << "------------------" << endl;
        }
      }
      break;
    }

    case 8:
    {
      cout << "Goodbye!\n";
      break;
    }

    default:
      cout << "Invalid Choice\n";
      break;
    }

  } while (num != 8);

  return 0;
}