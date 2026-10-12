// from server: 80% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Payload {};

template<class T>
struct Scoped {
    T* p;
    Scoped();
    Scoped(Scoped&);
    ~Scoped();
    T* release();
    void reset(T*);
};

template<class T>
inline Scoped<T>::Scoped() : p(0) {}

template<class T>
inline Scoped<T>::Scoped(Scoped& other) : p(other.release()) {}

template<class T>
inline Scoped<T>::~Scoped() {
    if (p)
        delete p;
}

template<class T>
inline T* Scoped<T>::release() {
    T* result = p;
    p = 0;
    return result;
}

template<class T>
inline void Scoped<T>::reset(T* value) {
    if (value != p) {
        if (p)
            delete p;
    }
    p = value;
}

const void* __cdecl getName();

struct S;

struct Implementation {
    virtual void execute();
    S* owner;
    int first;
    int unused;
    int second;
    int third;

    Implementation(S*, int, int, int);
};

inline Implementation::Implementation(S* object, int a, int b, int c) {
    owner = object;
    first = a;
    second = b;
    third = c;
}

struct Base {
    virtual ~Base();
    int reserved[5];
    Scoped<Implementation> implementation;

    Base(const void*, int, int, Scoped<Payload>, Payload*);
};

struct S : Base {
    S(int, int, int, int, int, Scoped<Payload>);
    virtual ~S();
};

S::S(int a, int b, int c, int d, int e, Scoped<Payload> payload)
    : Base(getName(), a, b, Scoped<Payload>(), payload.release()) {
    implementation.reset(new Implementation(this, c, d, e));
}
