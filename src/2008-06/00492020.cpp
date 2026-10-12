// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct S;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Ref {
    Control* control;
    Ref& operator=(const Ref&);
    ~Ref();
};

struct Object {
    void attach(S*);
};

struct Pair {
    Object* object;
    Ref ref;
};

Pair __cdecl makePair();
void* __cdecl getIndex();
void __cdecl initialize();
extern char initializationFlag;
void __cdecl initializeOnce(void (__cdecl*)(), void*);
extern "C" void (__cdecl* _invalid_parameter_noinfo)();

struct S {
    unsigned char padding[0x19c];
    Pair* first;
    Pair* last;

    Object* find();
    Object* get();
};

inline Ref::~Ref()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

Object* S::get()
{
    Object* result = find();
    if (result)
        return result;

    Pair value = makePair();
    result = value.object;

    initializeOnce(initialize, &initializationFlag);

    unsigned int index = (unsigned int)getIndex();
    if (index >= (unsigned int)(last - first))
        _invalid_parameter_noinfo();

    Pair& destination = first[index];
    destination.object = value.object;
    destination.ref = value.ref;

    result->attach(this);
    return result;
}
