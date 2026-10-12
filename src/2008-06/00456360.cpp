// from server: 93% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern char sourceType;
extern char destinationType;
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

struct Control
{
    void* vtable;
    volatile long references;
};

struct Count
{
    Control* control;

    Count();
    Count(const Count&);
    ~Count();
    Count& assign(const Count&);
};

inline Count::Count() : control(0)
{
}

inline Count::Count(const Count& other) : control(other.control)
{
    if (control)
    {
        volatile long* references = &control->references;
        _InterlockedExchangeAdd(references, 1);
    }
}

inline Count::~Count()
{
    if (control)
    {
        Count empty;
        assign(empty);
    }
}

struct Source
{
    void* pointer;
    Count count;
};

struct S
{
    void* pointer;
    Count count;

    S(const Source&, int);
};

S::S(const Source& source, int)
    : pointer(__RTDynamicCast(source.pointer, 0, &sourceType,
                              &destinationType, 0)),
      count(source.count)
{
    if (!pointer)
        count.assign(Count());
}
