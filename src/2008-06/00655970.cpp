// from server: 77% by king_originala
void* __cdecl operator new(unsigned int);

struct S;

struct Owner {
    S** pointer;
    int reserved[2];
    Owner(S* p) : pointer(new S*(p)) {}
    ~Owner();
};

struct Storage {
    int first;
    int last;
    int capacity;
    Storage() : first(0), last(0), capacity(0) {}
    ~Storage();
};

struct TableA {
    char data[32];
    TableA(const int&, const int&);
    ~TableA();
};

struct TableB {
    char data[32];
    TableB(const int&, const int&);
    ~TableB();
};

struct TableC {
    char data[32];
    TableC(const int&, const int&);
    ~TableC();
};

struct S {
    Owner owner;
    Storage storage;
    TableA a;
    TableB b;
    TableC c;
    int value;

    S(int);
};

S::S(int n)
    : owner(this), storage(), a(n, n), b(n, n), c(n, n), value(n)
{
}
