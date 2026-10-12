// from server: 85% by king_originala
struct String;

typedef void (__thiscall *StringCopy)(String *, const String *);
typedef void (__thiscall *StringDestroy)(String *);

extern StringCopy stringCopy;
extern StringDestroy stringDestroy;

struct String {
    unsigned char storage[28];

    String(const String &);
    ~String();
};

inline String::String(const String &other) {
    stringCopy(this, &other);
}

inline String::~String() {
    stringDestroy(this);
}

typedef void (__cdecl *Manager)(const void *, void *, int);

struct FunctionTable {
    Manager manager;
};

struct Function {
    FunctionTable *table;
    unsigned char padding[4];
    unsigned char storage[24];

    Function(const Function &);
    ~Function();
};

inline Function::Function(const Function &other) : table(0) {
    if (other.table) {
        table = other.table;
        other.table->manager(other.storage, storage, 0);
    }
}

inline Function::~Function() {
    if (table) {
        Manager manager = table->manager;
        if (manager)
            manager(storage, storage, 1);
        table = 0;
    }
}

struct S {
    void initialize(Function, String, int);
    S *f(Function, String, volatile int);
};

S *S::f(Function callback, String name, volatile int value) {
    initialize(callback, name, value);
    return this;
}
