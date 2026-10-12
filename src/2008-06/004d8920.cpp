// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void __cdecl operator delete(void*);
extern unsigned long thirdTable[];

struct First {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual ~First();
};

struct Second {
    virtual ~Second();
};

struct Third {
    unsigned long* vtable;
    void cleanup();
};

struct Fourth {
    ~Fourth();
};

struct Counter {
    virtual ~Counter();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct FirstOwner {
    First* pointer;
    ~FirstOwner();
};

struct SecondOwner {
    Second* pointer;
    ~SecondOwner();
};

struct ThirdOwner {
    Third* pointer;
    ~ThirdOwner();
};

struct FourthOwner {
    Fourth* pointer;
    ~FourthOwner();
};

struct SharedOwner {
    void* pointer;
    Counter* counter;
    ~SharedOwner();
};

struct Container {
    unsigned char storage[20];
    ~Container();
};

struct S {
    virtual ~S();
    FirstOwner first;
    SecondOwner second;
    ThirdOwner third;
    FourthOwner fourth;
    SharedOwner shared;
    Container container1;
    Container container2;
};

__forceinline FirstOwner::~FirstOwner() {
    delete pointer;
}

__forceinline SecondOwner::~SecondOwner() {
    delete pointer;
}

__forceinline ThirdOwner::~ThirdOwner() {
    Third* p = pointer;
    if (p) {
        p->vtable = thirdTable;
        p->cleanup();
        operator delete(p);
    }
}

__forceinline FourthOwner::~FourthOwner() {
    delete pointer;
}

__forceinline SharedOwner::~SharedOwner() {
    Counter* p = counter;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

S::~S() {
}
