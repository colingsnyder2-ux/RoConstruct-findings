// from server: 85% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std
{
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string
    {
        char storage[28];
    public:
        ~basic_string();
    };
}

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct FactoryProduct
{
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > name;
    unsigned long padding;
    void* product;
    Control* control;

    ~FactoryProduct();
};

FactoryProduct::~FactoryProduct()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
    {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}
