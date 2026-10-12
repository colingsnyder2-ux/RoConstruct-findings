// from server: 97% by king_originala
typedef unsigned int DWORD;

void* __cdecl operator new(unsigned int);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[32];
    public:
        __declspec(dllimport) basic_string(const T*);
        __declspec(dllimport) ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                          std::allocator<char> > String;

struct Base {
    DWORD storage[76];
    Base();
    void setName(const String&);
};

struct Pointer {
    void* value;
    Pointer();
    ~Pointer();
};

inline Pointer::Pointer() : value(0)
{
}

struct Signal;

struct Owner {
    Signal** value;
    Owner(Signal*);
    ~Owner();
};

inline Owner::Owner(Signal* signal)
    : value(new Signal*(signal))
{
}

struct Signal {
    Owner owner;
    DWORD reserved[2];
    DWORD first;
    DWORD last;
    DWORD count;
    Signal();
    ~Signal();
};

inline Signal::Signal()
    : owner(this), first(0), last(0), count(0)
{
}

struct S : Base {
    DWORD table;
    Pointer firstPointer;
    Pointer secondPointer;
    Signal signal;
    S();
};

S::S()
    : Base(),
      table((storage[0] = 0x830a0c,
             storage[4] = 0x830a00,
             storage[5] = 0x8309f8,
             storage[8] = 0x8309f0,
             storage[9] = 0x8309e0,
             storage[17] = 0x8309d0,
             storage[25] = 0x8309c0,
             storage[33] = 0x8309b0,
             storage[41] = 0x8309a0,
             storage[49] = 0x830990,
             0x830988)),
      firstPointer(),
      secondPointer(),
      signal()
{
    String name("FilteredSelection");
    setName(name);
}
