// from server: 75% by king_originala
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
}

struct tm;
extern "C" {
    extern __int64 (__cdecl* _time64)(__int64*);
    extern tm* (__cdecl* _localtime64)(const __int64*);
}

struct Time {
    __int64 ticks;
    Time(__int64);
};

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
    : std::basic_string<char, std::char_traits<char>, std::allocator<char> >(text),
      value(0)
{
    __int64 now;
    Time duration(300000000);
    _time64(&now);
    Time converted = convert_time(_localtime64(&now));
    value = add_time(&converted, duration);
}
