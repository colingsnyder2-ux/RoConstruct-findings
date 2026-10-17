// from server: 97% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl sub_6a067a(void*);

extern unsigned long table_82220c[];
extern unsigned long table_8221fc[];
extern unsigned long table_8221f4[];
extern unsigned long table_8221ec[];
extern unsigned long table_8221dc[];
extern unsigned long table_8221cc[];
extern unsigned long table_8221bc[];
extern unsigned long table_8221ac[];
extern unsigned long table_82219c[];
extern unsigned long table_82218c[];
extern unsigned long table_82217c[];
extern unsigned long table_82216c[];

struct RefCount
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    RefCount* count;
    unsigned long padding[2];
    ~Shared();
};

struct Buffer
{
    volatile unsigned long table;
    void* allocation;
    unsigned long padding[2];
    void* data;
    unsigned long size;
    unsigned long capacity;
    unsigned long tail;
    ~Buffer();
};

struct ThreadRef
{
    unsigned char storage[20];
    ~ThreadRef();
};

struct String
{
    unsigned char storage[28];
    ~String();
};

extern void (__thiscall *string_destructor)(String*);

struct Base
{
    volatile unsigned long words[76];
    ~Base();
};

struct S : Base
{
    Buffer first;
    Buffer second;
    Shared shared;
    ThreadRef thread;
    String string;

    void sub_4944b0(int);
    ~S();
};

inline String::~String()
{
    string_destructor(this);
}

inline Shared::~Shared()
{
    RefCount* p = count;
    if (p)
    {
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

inline Buffer::~Buffer()
{
    void* d = data;
    if (d)
        sub_6a067a(d);
    data = 0;
    size = 0;
    capacity = 0;
    void* a = allocation;
    sub_6a067a(a);
}

S::~S()
{
    words[0] = (unsigned long)table_82220c;
    words[4] = (unsigned long)table_8221fc;
    words[5] = (unsigned long)table_8221f4;
    words[8] = (unsigned long)table_8221ec;
    words[9] = (unsigned long)table_8221dc;
    words[17] = (unsigned long)table_8221cc;
    words[25] = (unsigned long)table_8221bc;
    words[33] = (unsigned long)table_8221ac;
    words[41] = (unsigned long)table_82219c;
    words[49] = (unsigned long)table_82218c;
    first.table = (unsigned long)table_82217c;
    second.table = (unsigned long)table_82216c;
    sub_4944b0(0);
}
