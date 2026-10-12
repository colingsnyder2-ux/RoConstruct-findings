// from server: 80% by king_originala
namespace std {
template<class T> struct char_traits;
template<class T> class allocator;

template<class C, class T, class A>
class basic_string {
    unsigned char storage[28];
public:
    ~basic_string();
};
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Object {
    virtual void destroy(unsigned int);
};

struct Holder {
    Object* p;
    Holder(const String&);
    ~Holder();
    void swap(Holder&);
};

inline Holder::~Holder() {
    if (p)
        p->destroy(1);
}

inline void Holder::swap(Holder& other) {
    if (&other != this) {
        Object* old = other.p;
        other.p = p;
        p = old;
    }
}

extern void* __cdecl getType();

struct Value {
    void* type;
    Holder holder;
};

struct Getter {
    virtual void v0();
    virtual void v1();
    virtual const String* get(String*, void*);
};

struct S {
    unsigned char padding[24];
    Getter* getter;
    void f(void*, Value*);
};

void S::f(void* object, Value* result) {
    String text;
    const String* returned = getter->get(&text, object);
    result->type = getType();
    result->holder.swap(Holder(*returned));
}
