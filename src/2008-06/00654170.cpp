// from server: 58% by king_originala
void* __cdecl operator new(unsigned int);

struct Vector;

struct Proxy {
    Vector* owner;
    Proxy(Vector* p);
};

inline Proxy::Proxy(Vector* p) : owner(p) {}

struct Vector {
    Proxy* proxy;
    unsigned int unused[2];
    void* first;
    void* last;
    void* limit;

    Vector();
    Vector(const Vector&);
    ~Vector();
};

inline Vector::Vector()
    : proxy(new Proxy(this)), first(0), last(0), limit(0) {}

struct S {
    void f(int value);
    void g(int value, Vector values);
};

void S::f(int value)
{
    g(value, Vector());
}
