// from server: 87% by king_originala
struct Storage {
    unsigned char data[24];
};

typedef void (__cdecl *Manager)(const Storage *, Storage *, int);

struct Table {
    Manager manager;
};

struct Function {
    Table *table;
    unsigned int padding;
    Storage storage;

    Function(const Function &other);
    ~Function();
};

inline Function::Function(const Function &other)
{
    table = 0;
    if (other.table) {
        table = other.table;
        other.table->manager(&other.storage, &storage, 0);
    }
}

inline Function::~Function()
{
    if (table) {
        Manager manager = table->manager;
        if (manager)
            manager(&storage, &storage, 1);
    }
}

struct S {
    S(Function function, const int &first, const int &second);
    void initialize(Function function, const int &first, const int &second);
};

S::S(Function function, const int &first, const int &second)
{
    initialize(function, first, second);
}
