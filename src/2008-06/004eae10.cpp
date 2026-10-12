// from server: 67% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Count {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Count* count;
    ~Shared()
    {
        Count* p = count;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

Shared __cdecl makeShared(void*);
extern const float initialValue;

struct Base {
    virtual void virtualFunction();
    unsigned char storage[212];
    Base(float, const Shared&, void*);
    ~Base();
};

struct Result {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    bool flag;
    ~Result();
};

struct Connection {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    bool flag;
    unsigned char padding[3];
    bool blocked;

    Connection() : first(0), second(0), flag(false), blocked(false) {}
    ~Connection();
    Connection& operator=(const Result&);
};

struct S : Base {
    Shared owner;
    Connection firstConnection;
    Connection secondConnection;

    S(void*, void*, void*);
    virtual void virtualFunction();
    void firstCallback();
    void secondCallback();
};

struct PairA {
    void (S::*callback)();
    S* object;
};

struct PairB {
    void (S::*callback)();
    S* object;
};

struct Function {
    unsigned char storage[40];
    Function(const PairA*);
    Function(const PairB*);
    ~Function();
};

struct ManagerA {
    Result connect(void*, const Function&, int);
};

struct ManagerB {
    Result connect(void*, const Function&, int);
};

extern ManagerA managerA;
extern ManagerB managerB;

S::S(void* object, void* baseObject, void* argument)
    : Base(initialValue, makeShared(baseObject), argument),
      owner(makeShared(object))
{
    {
        PairA pair;
        pair.callback = &S::firstCallback;
        pair.object = this;
        Function function(&pair);
        firstConnection = managerA.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            function, 10);
    }
    {
        PairB pair;
        pair.callback = &S::secondCallback;
        pair.object = this;
        Function function(&pair);
        secondConnection = managerB.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            function, 10);
    }
}
