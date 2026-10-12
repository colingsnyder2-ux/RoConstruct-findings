// from server: 98% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits = char_traits<T>,
             class Alloc = allocator<T> >
    class basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char> string;
}

extern void (__thiscall* constructString)(std::string*, const char*);

namespace std {
    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        constructString(this, text);
    }
}

struct Context {
    int value;
};

struct OwnerPadding {
    char storage[0x1c8];
};

struct Owner : OwnerPadding, Context {
};

extern double __cdecl readTime();

struct Base {
    int storage[2];

    Base(Context*, std::string);
    virtual ~Base();
};

struct CRobloxView : Base {
    void* argument;
    Owner* owner;
    int reserved;
    double timestamp;

    CRobloxView(void*, Owner*);
    virtual ~CRobloxView();
};

CRobloxView::CRobloxView(void* value, Owner* source)
    : Base(static_cast<Context*>(source), "ToggleToolbox")
{
    argument = value;
    owner = source;
    timestamp = readTime();
}
