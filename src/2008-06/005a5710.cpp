// from server: 79% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;

    Reference& operator=(const Reference&);
    ~Reference();
};

__forceinline Reference::~Reference() {
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct S;

struct Object {
    void attach(S*);
};

struct Pointer {
    Object* object;
    Reference reference;

    Pointer& operator=(const Pointer&);
    ~Pointer();
};

__forceinline Pointer::~Pointer() {}

__forceinline Pointer& Pointer::operator=(const Pointer& other) {
    object = other.object;
    reference = other.reference;
    return *this;
}

struct Provider {
    Pointer get();
};

extern Pointer __cdecl resolve(void*);
extern Pointer __cdecl convert(const Pointer&);

struct S {
    unsigned char prefix[0x104];
    S* parent;
    unsigned char middle[0x2f4];
    S* context;
    unsigned int reserved;
    Provider* provider;

    bool contains(S*);
    void* lookup();
    void set(Object*);
    void update();
};

void S::update() {
    if (context) {
        S* p = context->parent;
        if (p == this || contains(p))
            return;
    }

    Pointer result = resolve(lookup());
    if (!result.object) {
        result = convert(provider->get());
        result.object->attach(this);
    }
    set(result.object);
}
