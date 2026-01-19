# Lost and Found Management System (C++)

## Introduction
This project is a **console-based Lost and Found Management System** implemented in **C++**.  
It allows users to record, search, and manage lost items through a simple text-based menu interface.

The system is designed to help keep track of lost items, verify ownership using a secret mark, and maintain a complete history of all items.

---

## Features

### 1. Add Lost Item
Records details of a lost item, including:
- Item name  
- Color  
- Location where it was lost  
- Reporter’s name  
- Date reported  
- Secret mark (used later for verification)

Each item is automatically assigned an ID.

---

### 2. View Lost Items
Displays all **unclaimed (lost)** items in a clear tabular format, showing their basic details.

---

### 3. Search Item
Allows users to search for lost items by **item name**.  
- Search is **case-insensitive**
- Displays only matching **unclaimed** items

---

### 4. Claim Item
Enables a user to claim a lost item by:
- Entering the item ID
- Providing the correct secret mark

If the secret mark is correct:
- The item is marked as **claimed**
- Claimer’s name and date claimed are recorded

If the secret mark is incorrect, the claim is rejected.

---

### 5. View Full History
Shows the complete history of **all items**, including:
- Item details
- Status (Lost / Claimed)
- Reporter’s name
- Claimer’s name (if claimed)
- Date reported
- Date claimed

---

### 6. Exit
Safely exits the program.

---

## Implementation Details
- Uses **arrays** to store item information
- Uses **functions** to organize operations
- Implements a **menu-driven interface**
- Includes utility functions such as `toLower()` for case-insensitive searching
- Tracks the total number of items added for efficient management

---

## Sample Outputs

### Adding Lost Items
```

Item added successfully!

```

### Viewing Lost Items
```

ID   Name      Color    Location     Date Reported
1    Wallet    Black    Library      2026-01-10

```

### Searching an Item
```

Enter item name: wallet
Item found!

```

### Claiming an Item
- Correct secret mark:
```

Item claimed successfully.

```
- Incorrect secret mark:
```

Incorrect secret mark. Claim denied.

```

### Viewing Full History
```

ID   Name     Status    Reporter    Claimer    Date Claimed
1    Wallet   Claimed   John        Alex       2026-01-15

````

---

## How to Run
1. Compile the program using a C++ compiler:
```bash
   g++ main.cpp -o lost_and_found
````

2. Run the executable:

```bash
   ./lost_and_found
 ```

---

## Author

Developed as part of a **C++ programming assignment** to practice:

* Arrays
* Functions
* Control structures
* Basic data management
* GitHub collaboration

---

## License

This project is intended for **educational purposes only**.
---
