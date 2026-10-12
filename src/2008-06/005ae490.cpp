// from server: 80% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl sub_55e7d0(void *, void *);
extern "C" void * __cdecl sub_6a0920(unsigned int);

struct Base
{
    char data[0x130];
    Base();
    ~Base();
};

struct Shared
{
    void *object;
    void *control;
    Shared();
    ~Shared();
};

struct Tag {};

struct Container
{
    char data[0x24];
    Container(const Tag &, const Tag &);
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
    void *head;
    unsigned int unused[2];
    unsigned int size;
    unsigned int extra[2];
    List();
    ~List();
};

struct Vector
{
    unsigned int first, last, end;
    Vector();
    ~Vector();
};

struct Pair
{
    unsigned int first, second;
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
    unsigned int value;
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
    String(const char *);
    ~String();
};

struct S : Base
{
    unsigned int table130;
    unsigned int table134;
    unsigned int value138;
    unsigned int value13c;
    Shared shared;
    unsigned int value148;
    unsigned int value14c;
    unsigned int value150;
    unsigned int value154;
    unsigned int value158;
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
    void sub_55af90(const String &);
};

inline Shared::Shared()
{
    object = *(void **)0x975c6c;
    void *p = *(void **)0x975c70;
    control = p;
    if (p)
        _InterlockedExchangeAdd((volatile long *)((char *)p + 4), 1);
}

inline Time::Time()
{
    typedef __int64 (__cdecl *TimeFunction)(__int64 *);
    typedef void * (__cdecl *LocalTimeFunction)(const __int64 *);
    __int64 now;
    (*(TimeFunction *)0x802808)(&now);
    sub_55e7d0(this, (*(LocalTimeFunction *)0x8027e8)(&now));
}

inline List::List()
{
    void *p = sub_6a0920(4);
    if (p)
        *(void **)p = this;
    else
        p = 0;
    head = p;
    size = 0;
    extra[0] = 0;
    extra[1] = 0;
}

inline Vector::Vector()
{
    first = 0;
    last = 0;
    end = 0;
}

inline Pair::Pair()
{
    first = 0;
    second = 0;
}

inline Timer::Timer()
{
    first = 0.0;
    second = 0.0;
}

inline Holder::Holder()
{
    value = 0;
}

inline String::String(const char *s)
{
    typedef void (__thiscall *Constructor)(String *, const char *);
    (*(Constructor *)0x802458)(this, s);
}

inline String::~String()
{
    typedef void (__thiscall *Destructor)(String *);
    (*(Destructor *)0x802468)(this);
}

S::S()
    : table130((
        *(unsigned int *)((char *)this + 0x00) = 0x8347fc,
        *(unsigned int *)((char *)this + 0x10) = 0x8347f0,
        *(unsigned int *)((char *)this + 0x14) = 0x8347e8,
        *(unsigned int *)((char *)this + 0x20) = 0x8347e0,
        *(unsigned int *)((char *)this + 0x24) = 0x8347d0,
        *(unsigned int *)((char *)this + 0x44) = 0x8347c0,
        *(unsigned int *)((char *)this + 0x64) = 0x8347b0,
        *(unsigned int *)((char *)this + 0x84) = 0x8347a0,
        *(unsigned int *)((char *)this + 0xa4) = 0x834790,
        *(unsigned int *)((char *)this + 0xc4) = 0x834780,
        0x834774)),
      table134(0x834768),
      value138(0),
      value13c(0x80ebc8),
      value148(0),
      value14c(0),
      value150(0),
      value154(0),
      value158(0),
      container(Tag(), Tag()),
      value1ac(false)
{
    String name("Script Context");
    sub_55af90(name);
}
