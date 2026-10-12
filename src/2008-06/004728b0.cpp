// from server: 99% by king_originala
namespace std
{
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits = char_traits<T>,
             class Alloc = allocator<T> >
    class basic_string
    {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char> String;

extern void (__thiscall *string_copy)(String*, const String&);

template<class T, class Traits, class Alloc>
__forceinline std::basic_string<T, Traits, Alloc>::basic_string(
    const std::basic_string<T, Traits, Alloc>& other)
{
    string_copy(this, other);
}

struct Base
{
    virtual ~Base();
    Base(const String&);
    char storage[36];
};

struct S : Base
{
    String first;
    String second;

    S(const String&, const String&);
    virtual ~S();
};

S::S(const String& a, const String& b)
    : Base(a), first(a), second(b)
{
}
