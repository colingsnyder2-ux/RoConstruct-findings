// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* count;
    ~Shared();
};

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

Shared __cdecl convert(void*);

struct Result {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    unsigned char flag;
    ~Result();
};

struct Connection {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    unsigned char flag;
    unsigned char padding[3];
    unsigned char active;

    Connection();
    ~Connection();
    Connection& operator=(const Result&);
};

inline Connection::Connection()
    : first(0), second(0), flag(0), active(0)
{
}

struct __single_inheritance Part;

struct FirstBinding {
    void (Part::*function)();
    Part* object;
};

struct SecondBinding {
    void (Part::*function)();
    Part* object;
};

struct Function {
    unsigned char storage[40];
    Function(const FirstBinding&);
    Function(const SecondBinding&);
    ~Function();
};

struct FirstSignal {
    Result connect(void*, const Function&, int);
};

struct SecondSignal {
    Result connect(void*, const Function&, int);
};

extern FirstSignal firstSignal;
extern SecondSignal secondSignal;
extern float initialValue;

struct Base {
    virtual void virtualFunction();
    unsigned char storage[212];
    Base(float, const Shared&, void*);
    ~Base();
};

struct Part : Base {
    Shared object;
    Connection first;
    Connection second;

    virtual void virtualFunction();
    void firstCallback();
    void secondCallback();
    Part(void*, void*, void*);
};

Part::Part(void* source, void* sharedSource, void* extra)
    : Base(initialValue, convert(sharedSource), extra),
      object(convert(source))
{
    {
        FirstBinding binding;
        binding.function = &Part::firstCallback;
        binding.object = this;
        Function callback(binding);
        Result result = firstSignal.connect(
            source ? static_cast<unsigned char*>(source) + 20 : 0,
            callback, 10);
        first = result;
    }

    {
        SecondBinding binding;
        binding.function = &Part::secondCallback;
        binding.object = this;
        Function callback(binding);
        Result result = secondSignal.connect(
            source ? static_cast<unsigned char*>(source) + 20 : 0,
            callback, 10);
        second = result;
    }
}
