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

extern void (__thiscall *string_copy)(void*, const std::string&);
extern void (__thiscall *string_destroy)(void*);

template<class T, class Traits, class Allocator>
__forceinline std::basic_string<T, Traits, Allocator>::basic_string(
    const basic_string& other)
{
    string_copy(this, other);
}

template<class T, class Traits, class Allocator>
__forceinline std::basic_string<T, Traits, Allocator>::~basic_string()
{
    string_destroy(this);
}

struct Base {
    Base(std::string text, int value);
    virtual ~Base();
};

struct FilteredSelection : Base {
    FilteredSelection(std::string text, int value);
    virtual ~FilteredSelection();
};

FilteredSelection::FilteredSelection(std::string text, int value)
    : Base(text, value)
{
}
