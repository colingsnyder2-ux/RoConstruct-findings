// from server: 43% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct TypeInfo {
    bool __thiscall operator==(const TypeInfo&) const;
};

extern TypeInfo emptyType;
extern TypeInfo sourceType;
extern TypeInfo objectType;

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    Shared();
    ~Shared();
};

inline Shared::Shared() : object(0), control(0) {}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Holder {
    virtual void unused();
    virtual const TypeInfo& type() const;
};

struct Any {
    Holder* holder;
    void assign(const Shared&);
};

struct Descriptor {
    unsigned char padding[8];
    const TypeInfo* type;
};

extern Descriptor* __cdecl objectDescriptor();
extern Shared __cdecl convert(const Shared&);

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

struct Error {
    unsigned char storage[40];
    Error(const String&);
    ~Error();
};

struct S {
    Descriptor* descriptor;
    Any value;
    Shared* f();
};

Shared* S::f() {
    if (emptyType == *descriptor->type) {
        value.assign(Shared());
        descriptor = objectDescriptor();
    }

    if (sourceType == *descriptor->type) {
        Any* a = &value;
        Shared* p = 0;
        if (a) {
            const TypeInfo& t = a->holder ? a->holder->type() : emptyType;
            if (t == sourceType)
                p = reinterpret_cast<Shared*>(
                    reinterpret_cast<char*>(a->holder) + 4);
        }

        if (p)
            a->assign(convert(*p));
        else
            a->assign(Shared());

        descriptor = objectDescriptor();
    }

    Any* a = &value;
    Shared* p = 0;
    if (a) {
        const TypeInfo& t = a->holder ? a->holder->type() : emptyType;
        if (t == objectType)
            p = reinterpret_cast<Shared*>(
                reinterpret_cast<char*>(a->holder) + 4);
    }

    if (!p)
        throw Error(String("Unable to cast value to Object"));

    return p;
}
