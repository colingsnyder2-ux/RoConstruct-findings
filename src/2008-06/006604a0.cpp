// from server: 68% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Owner
{
    Control* control;
    Owner();
    ~Owner();
    Owner& operator=(const Owner&);
};

inline Owner::Owner() : control(0)
{
}

inline Owner::~Owner()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
            p->destroy();
    }
}

struct Product
{
    void* pointer;
    Owner owner;
};

Product __cdecl makeProduct(void*);

struct FilterStairs
{
    virtual ~FilterStairs();
    void* pointer;
    Owner owner;

    FilterStairs(void*);
    FilterStairs& operator=(const Product&);
};

inline FilterStairs& FilterStairs::operator=(const Product& product)
{
    pointer = product.pointer;
    owner = product.owner;
    return *this;
}

FilterStairs::FilterStairs(void* argument)
    : pointer(0), owner()
{
    *this = makeProduct(argument);
}
