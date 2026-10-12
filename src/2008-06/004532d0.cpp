// from server: 54% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

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
};

__forceinline Result::Result(const Result& other)
    : first(other.first), second(other.second)
{
    if (second)
        _InterlockedExchangeAdd(&second->strong, 1);
}

__forceinline Result::~Result()
{
    if (second)
    {
        Control* control = second;
        if (_InterlockedExchangeAdd(&control->strong, -1) == 1)
        {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                control->destroy();
        }
    }
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

    bool f();
};

bool ReportAbuseVerb::f()
{
    Guard guard(source->get());
    return source->get().first->getPrompt()->f() != 0;
}
