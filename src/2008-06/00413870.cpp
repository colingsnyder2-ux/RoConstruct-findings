// from server: 98% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

typedef std::string* (__thiscall *StringCopy)(std::string*, const std::string&);
typedef void (__thiscall *StringDestroy)(std::string*);

extern StringCopy stringCopy;
extern StringDestroy stringDestroy;

namespace std {
    template<class T, class Traits, class Allocator>
    __forceinline basic_string<T, Traits, Allocator>::basic_string(
        const basic_string& other)
    {
        stringCopy((string*)this, (const string&)other);
    }

    template<class T, class Traits, class Allocator>
    __forceinline basic_string<T, Traits, Allocator>::~basic_string()
    {
        stringDestroy((string*)this);
    }
}

struct Base {
    Base(int, int, std::string);
    virtual void execute();
};

struct CutVerb : Base {
    CutVerb(int, int, std::string);
    virtual void execute();
};

CutVerb::CutVerb(int a, int b, std::string name)
    : Base(a, b, name)
{
}
