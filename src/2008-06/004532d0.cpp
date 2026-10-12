// from server: 96% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Prompt
{
    int f();
};

struct Object
{
    Prompt* getPrompt();
};

struct Result
{
    Object* first;
    Control* second;

    Result(const Result&);
    ~Result();
    const Result& ref() const;
};

__forceinline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
    if (second)
        _InterlockedIncrement(&second->strong);
}

__forceinline Result::~Result()
{
    if (second)
    {
        Control* control = second;
        if (_InterlockedDecrement(&control->strong) == 0)
        {
            control->dispose();
            if (_InterlockedDecrement(&control->weak) == 0)
                control->destroy();
        }
    }
}

__forceinline const Result& Result::ref() const
{
    return *this;
}

struct Source
{
    Result get();
};

struct Guard
{
    unsigned char storage[12];

    Guard(Result);
    ~Guard();
};

struct ReportAbuseVerb
{
    unsigned char padding[12];
    Source* source;

    char f();
};

char ReportAbuseVerb::f()
{
    Guard guard(source->get().ref());
    return (char)source->get().first->getPrompt()->f();
}
