// from server: 89% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Object {
    virtual void first();
    virtual ~Object();
};

struct Owner {
    Object* pointer;
    ~Owner();
};

inline Owner::~Owner()
{
    delete pointer;
}

struct Control {
    virtual void first();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

struct Root {
    virtual ~Root();
    char data[0x54];
};

struct Chunk {
    char data[0x20];
    ~Chunk();
};

struct Primary : Root {
    Chunk chunk;
    ~Primary();
};

inline Primary::~Primary()
{
}

struct Verb {
    virtual ~Verb();
    char data[0x24];
};

struct Interface1 {
    virtual void method1() = 0;
};

struct Interface2 {
    virtual void method2() = 0;
};

struct Interface3 {
    virtual void method3() = 0;
};

struct Storage {
    char data[0xc0];
    ~Storage();
};

struct SmallBase {
    virtual ~SmallBase();
    char data[4];
};

struct Small : SmallBase {
    ~Small();
};

inline Small::~Small()
{
}

struct B_func_00432e50 {
    virtual ~B_func_00432e50();
};

struct S_func_00432e50 : B_func_00432e50 {
    char data[0x58];
    ~S_func_00432e50();
};

struct Binder : Primary, Verb, Interface1, Interface2, Interface3 {
    char padding[4];
    Storage storage;
    Shared shared;
    Small small;
    S_func_00432e50 member;
    Owner owner1;
    Owner owner2;
    Owner owner3;
    Owner owner4;
    Owner owner5;

    virtual void method1();
    virtual void method2();
    virtual void method3();
    ~Binder();
};

Binder::~Binder()
{
}
