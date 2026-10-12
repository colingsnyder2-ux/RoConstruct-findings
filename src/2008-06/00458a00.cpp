// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1)
    {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

struct Source;

struct Result
{
    unsigned int first;
    unsigned int second;

    Result();
    Result(Source*);
    Result(const Result&);
    ~Result();
};

struct Source
{
    void copy(Result* output);
};

inline Result::Result()
{
    first = 0;
    second = 0;
}

inline Result::Result(Source* source)
{
    if (source)
        source->copy(this);
    else
    {
        first = 0;
        second = 0;
    }
}

inline Result::Result(const Result& other)
{
    first = other.first;
    second = other.second;
    if (second)
        _InterlockedExchangeAdd(
            reinterpret_cast<volatile long*>(second + 4), 1);
}

inline Result::~Result()
{
    if (second)
        reinterpret_cast<Control*>(second)->release();
}

extern Result globalResult;

struct Sink
{
    virtual void invoke(Result, Result);
};

struct S
{
    unsigned char padding[0x54];
    Source* source;
    unsigned char padding2[0x37c];
    Sink sink;

    void initialize();
    void forward(Result);
    void f();
};

void S::f()
{
    initialize();
    forward(Result(source));
    sink.invoke(globalResult, Result());
}
