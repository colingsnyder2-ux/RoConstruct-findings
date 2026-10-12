// from server: 95% by king_originala
extern unsigned char derivedTable[];
extern "C" long (__stdcall *InterlockedDecrement)(volatile long*);

struct Ref {
    virtual ~Ref();
    volatile long refs;
    void dispose();
};

struct Handle {
    Ref* value;
    void assign(void* p);
    ~Handle();
};

inline Handle::~Handle() {
    if (value && InterlockedDecrement(&value->refs) == 0) {
        value->dispose();
        delete value;
    }
}

struct S {
    unsigned long table;
    float x, y, z;
    unsigned long flags;
    Handle handle;
    float a, b, c;

    S(const S&);
};

struct D : S {
    D(const D& other);
};

inline D::D(const D& other) : S(other) {
    table = reinterpret_cast<unsigned long>(derivedTable);
}

struct Pair {
    unsigned short first;
    unsigned short second;
    Pair(unsigned short a, unsigned short b);
};

inline Pair::Pair(unsigned short a, unsigned short b)
    : first(a), second(b) {
}

struct WedgeBuilder {
    void build(D value, Pair pair, int purpose);
    void f(D value, unsigned short first, unsigned short second, int purpose);
};

void WedgeBuilder::f(D value, unsigned short first,
                     unsigned short second, int purpose) {
    build(value, Pair(first, second), purpose);
}
