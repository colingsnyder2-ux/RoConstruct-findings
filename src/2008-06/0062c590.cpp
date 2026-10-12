// from server: 92% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Callback {
    unsigned int a, b, c, d, e, f;
    Callback(const Callback&);
};

inline Callback::Callback(const Callback& value) {
    a = value.a;
    b = value.b;
    c = value.c;
    d = value.d;
    e = value.e;
    f = value.f;
}

struct Control {
    void* pointer;
    Control();
    ~Control();
};

inline Control::Control() : pointer(0) {}

struct Holder {
    void* target;
    Holder(Callback);
    ~Holder();
    void assign(const Callback&);
};

inline Holder::Holder(Callback value) : target(0) {
    assign(value);
}

struct Object {
    unsigned char storage[40];
    Object();
};

struct S {
    void* object;
    Control control;
    Holder callback;

    S(const Callback&);
    void set(Object*);
    void finish();
};

S::S(const Callback& value)
    : object(0), control(), callback(value) {
    set(new Object);
    finish();
}
