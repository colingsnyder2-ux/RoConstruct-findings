// from server: 87% by king_originala
typedef unsigned int size_t;

void* __cdecl operator new(size_t);

extern void* (__thiscall *constructString)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;

    template<class T, class Traits, class Alloc>
    struct basic_string {
        unsigned char storage[28];
        basic_string();
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string()
    {
        constructString(this);
    }
}

const void* __cdecl getLocalScope();

struct Guid {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > text;
    const void* scope;

    Guid();
    ~Guid();
};

__forceinline Guid::Guid()
    : scope(getLocalScope())
{
}

struct ContainerBase {
    struct Proxy {
        ContainerBase* owner;
        Proxy(ContainerBase*);
    };

    Proxy* proxy;
    unsigned int reserved[2];

    ContainerBase();
    ~ContainerBase();
};

__forceinline ContainerBase::Proxy::Proxy(ContainerBase* p)
    : owner(p)
{
}

__forceinline ContainerBase::ContainerBase()
    : proxy(new Proxy(this))
{
}

struct Container : ContainerBase {
    void* first;
    void* last;
    void* end;

    Container();
};

__forceinline Container::Container()
    : first(0), last(0), end(0)
{
}

struct S {
    Guid guid;
    Container container;

    S();
};

S::S()
{
}
