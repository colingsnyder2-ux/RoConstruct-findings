// from server: 77% by king_originala
extern void* (__thiscall* construct_string)(void*, const char*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    template<class T, class Traits, class Alloc>
    __forceinline basic_string<T, Traits, Alloc>::basic_string(const T* text)
    {
        construct_string(this, text);
    }
}

struct tm;

extern "C" {
    extern __int64 (__cdecl* _time64)(__int64*);
    extern tm* (__cdecl* _localtime64)(const __int64*);
}

struct Time {
    __int64 ticks;
    Time();
    Time(__int64);
};

__forceinline Time::Time()
{
}

__forceinline Time::Time(__int64 n) : ticks(n)
{
}

extern Time __cdecl convert_time(const tm*);
extern Time __cdecl add_time(const Time*, Time);

struct S : std::basic_string<char, std::char_traits<char>, std::allocator<char> > {
    Time value;
    S(const char*);
};

S::S(const char* text)
    : std::basic_string<char, std::char_traits<char>, std::allocator<char> >(text)
{
    __int64 now;
    _time64(&now);
    Time converted = convert_time(_localtime64(&now));
    value = add_time(&converted, Time(300000000));
}
