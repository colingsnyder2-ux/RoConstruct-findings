// from server: 59% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Function
{
    void invoke();
};

struct FunctionRef
{
    Function *object;
    RefCount *count;
    ~FunctionRef();
};

inline FunctionRef::~FunctionRef()
{
    RefCount *p = count;
    if (p)
    {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

struct Mutex
{
    char storage[32];
    void lock();
};

struct Lock
{
    Mutex *mutex;
    unsigned long storage[3];
    Lock(Mutex *);
    ~Lock();
};

inline Lock::Lock(Mutex *p)
{
    mutex = p;
    p->lock();
}

struct Range
{
    void *first;
    char padding[20];
    void **last;
    Range(void *);
    ~Range();
};

struct Iterator
{
    unsigned long data[4];
};

struct S;

struct Bound
{
    void (__cdecl *function)();
    int adjustment;
    S *object;
    unsigned long extra;
};

struct Cleanup
{
    void release();
};

extern FunctionRef __cdecl sub_593cb0(void *);
extern "C" void __cdecl sub_5ad000();
extern "C" Iterator *__cdecl sub_5ac450(
    Iterator *, void *, void *, void *, void **, Bound);
extern "C" void __cdecl sub_6a067a(void *);

struct S
{
    char padding0[0x138];
    void *context;
    Mutex mutex;
    char source[0x4c];
    void *pending;
    void f();
};

void S::f()
{
    if (context)
    {
        Lock lock(&mutex);
        try
        {
            sub_593cb0(context).object->invoke();

            Range range(source);
            Iterator result;
            Bound bound;
            bound.function = sub_5ad000;
            bound.adjustment = 0;
            bound.object = this;
            bound.extra = result.data[3];

            sub_5ac450(&result, range.first, *range.last,
                       range.first, range.last, bound);

            void *p = pending;
            pending = 0;
            if (p)
            {
                ((Cleanup *)((char *)p + 4))->release();
                sub_6a067a(p);
            }
        }
        catch (...)
        {
        }
    }
}
