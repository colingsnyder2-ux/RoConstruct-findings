// from server: 91% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct Base;

struct Proxy
{
    Base* owner;
    Proxy(Base*);
};

struct Base
{
    Proxy* proxy;
    int reserved[2];

    Base();
    ~Base() throw();
};

struct Buffer : Base
{
    void* first;
    void* last;
    void* limit;

    Buffer();
    ~Buffer() throw();
    void __thiscall assign(const int*);
};

__forceinline Proxy::Proxy(Base* value)
{
    owner = value;
}

__forceinline Base::Base()
{
    proxy = new Proxy(this);
}

__forceinline Base::~Base() throw()
{
    operator delete(proxy);
}

__forceinline Buffer::Buffer()
{
    first = 0;
    last = 0;
    limit = 0;
}

__forceinline Buffer::~Buffer() throw()
{
    if (first)
        operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

extern int __cdecl sub_615940(int, int, Buffer*, int, int, float);

int __cdecl sub_6160b0(int a, int b, int source, int c, int d, float e)
{
    Buffer buffer;
    buffer.assign(&source);
    return sub_615940(a, b, &buffer, c, d, e);
}
