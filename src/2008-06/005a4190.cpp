// from server: 87% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
struct Storage {
    union {
        double alignment;
        unsigned char bytes[24];
    };
};

typedef void (__cdecl *Manager)(Storage *, Storage *, int);

struct Table {
    Manager manage;
};

struct Function {
    const Table *table;
    Storage storage;
    ~Function();
};

inline Function::~Function()
{
    if (table && table->manage)
        table->manage(&storage, &storage, 1);
}

struct Base {
    unsigned long words[86];
    Base();
    ~Base();
};

struct S : Base {
    const Table *table;
    Storage storage;
    S(Function source);
};

S::S(Function source) : Base()
{
    words[0] = 0x0081a154;
    words[4] = 0x0081a144;
    words[5] = 0x0081a13c;
    words[8] = 0x0081a134;
    words[9] = 0x0081a124;
    words[17] = 0x0081a114;
    words[25] = 0x0081a104;
    words[33] = 0x0081a0f4;
    words[41] = 0x0081a0e4;
    words[49] = 0x0081a0d4;

    table = 0;
    if (source.table) {
        table = source.table;
        source.table->manage(&source.storage, &storage, 0);
    }
}
