// from server: 97% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern "C" void __cdecl sub_55e7d0(void*, void*);
extern "C" void* __cdecl sub_6a0920(unsigned);

extern __int64 (__cdecl *time_function)(__int64*);
extern void* (__cdecl *localtime_function)(const __int64*);

extern char table00[], table10[], table14[], table20[], table24[];
extern char table44[], table64[], table84[], tablea4[], tablec4[];
extern char table130_data[], table134_data[], descriptor_data[];

struct Base
{
    char data[0x130];
    Base();
    ~Base();
};

struct Shared
{
    void* object;
    void* control;
    Shared();
    ~Shared();
};

extern void* global_object;
extern void* global_control;

struct Tag
{
    Tag();
};

struct Zeros
{
    unsigned data[5];
    Zeros();
};

struct Container
{
    char data[0x24];
    Container();
    void initialize(const Tag&, const Tag&);
    ~Container();
};

struct Time
{
    char data[8];
    Time();
    ~Time();
};

struct List
{
    void* head;
    unsigned unused[2];
    unsigned size;
    unsigned extra[2];
    List();
    ~List();
};

struct Vector
{
    unsigned first, last, end;
    Vector();
    ~Vector();
};

struct Pair
{
    unsigned first, second;
    Pair();
    ~Pair();
};

struct Timer
{
    double first, second;
    Timer();
    ~Timer();
};

struct Holder
{
    unsigned value;
    Holder();
    ~Holder();
};

struct ThreadRef
{
    char data[8];
    ThreadRef();
    ~ThreadRef();
};

struct State
{
    char data[0x18];
    State();
    ~State();
};

struct String
{
    char data[0x20];
    String(const char*);
    ~String();
};

extern void (__thiscall *string_constructor)(String*, const char*);
extern void (__thiscall *string_destructor)(String*);

struct S : Base
{
    void* table130;
    void* table134;
    unsigned value138;
    void* value13c;
    Shared shared;
    Zeros zeros;
    Container container;
    Time time;
    List list;
    Vector vector;
    bool value1ac;
    Pair pair1b0;
    Timer timer;
    Pair pair1c8;
    ThreadRef thread;
    State state;
    Holder holder;

    S();
    void sub_55af90(const String&);
};

__forceinline Tag::Tag()
{
}

__forceinline Zeros::Zeros()
{
    data[0] = 0;
    data[1] = 0;
    data[2] = 0;
    data[3] = 0;
    data[4] = 0;
    _ReadWriteBarrier();
}

__forceinline Shared::Shared()
{
    object = global_object;
    control = global_control;
    if (control)
    {
        volatile long* count = (volatile long*)((char*)control + 4);
        _InterlockedExchangeAdd(count, 1);
    }
}

__forceinline Container::Container()
{
    Tag first;
    Tag second;
    initialize(first, second);
}

__forceinline Time::Time()
{
    __int64 now;
    time_function(&now);
    sub_55e7d0(this, localtime_function(&now));
}

__forceinline List::List()
{
    void* p = sub_6a0920(4);
    if (p)
        *(void**)p = this;
    else
        p = 0;
    head = p;
    size = 0;
    extra[0] = 0;
    extra[1] = 0;
}

__forceinline Vector::Vector()
{
    first = 0;
    last = 0;
    end = 0;
}

__forceinline Pair::Pair()
{
    first = 0;
    second = 0;
}

__forceinline Timer::Timer()
{
    first = 0.0;
    second = 0.0;
}

__forceinline Holder::Holder()
{
    value = 0;
}

__forceinline String::String(const char* s)
{
    string_constructor(this, s);
}

__forceinline String::~String()
{
    string_destructor(this);
}

S::S()
    : table130((
        *(void**)((char*)this + 0x00) = table00,
        *(void**)((char*)this + 0x10) = table10,
        *(void**)((char*)this + 0x14) = table14,
        *(void**)((char*)this + 0x20) = table20,
        *(void**)((char*)this + 0x24) = table24,
        *(void**)((char*)this + 0x44) = table44,
        *(void**)((char*)this + 0x64) = table64,
        *(void**)((char*)this + 0x84) = table84,
        *(void**)((char*)this + 0xa4) = tablea4,
        *(void**)((char*)this + 0xc4) = tablec4,
        table130_data)),
      table134(table134_data),
      value138(0),
      value13c(descriptor_data),
      value1ac(false)
{
    String name("Script Context");
    sub_55af90(name);
}
