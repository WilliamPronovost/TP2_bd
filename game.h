typedef struct{
    size_t count;
    int cost;
}Items;

typedef struct{
    Items* items;
    size_t count;
}Inventory;

typedef struct{
    size_t count;
}Wallet;

typedef struct{
sqlite3* g;
sqlite3* db;
}GameData;