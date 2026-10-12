// from server: 74% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;
    Vector3();
    Vector3(const Vector3&);
};

inline Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

inline Vector3::Vector3(const Vector3& v)
    : x(v.x), y(v.y), z(v.z) {}

struct Items;

struct Proxy {
    Items* owner;
    Proxy(Items*);
};

inline Proxy::Proxy(Items* p) : owner(p) {}

struct Items {
    Proxy* proxy;
    unsigned int reserved[2];
    char* first;
    char* last;
    char* limit;

    Items();
    ~Items();
};

inline Items::Items()
    : proxy(new Proxy(this)), first(0), last(0), limit(0) {}

struct S {
    void collect(void*, void*, Items*);
    void apply(Items*, Vector3, bool);
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    Items items;
    collect(a, b, &items);
    if ((static_cast<unsigned int>(items.last - items.first) & ~7U) != 0) {
        static const Vector3 zero;
        apply(&items, zero, true);
    }
}
