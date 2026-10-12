// from server: 94% by king_originala
typedef void (__cdecl *Manager)(void *, void *, int);

struct FunctionTable {
    Manager destroy;
};

struct Function {
    FunctionTable *table;
    unsigned int reserved;
    unsigned char storage[72];

    Function(const Function &);
    ~Function();
};

inline Function::~Function()
{
    if (table) {
        Manager destroy = table->destroy;
        if (destroy)
            destroy(storage, storage, 1);
        table = 0;
    }
}

struct S {
    void *first;
    unsigned int reserved[2];
    void *begin;
    void *end;
    void *capacity;

    ~S();
    void insert(void *, int, Function, Function);
    void f(Function, Function, unsigned int);
};

void S::f(Function a, Function b, unsigned int)
{
    void *oldFirst = first;
    begin = 0;
    end = 0;
    capacity = 0;
    try {
        insert(oldFirst, 0, a, b);
    }
    catch (...) {
        this->~S();
        throw;
    }
}
