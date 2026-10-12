// from server: 65% by king_originala
namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        basic_string(const basic_string&);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        const char* message;
        int owned;
    public:
        exception();
        virtual ~exception();
        virtual const char* what() const;
    };

    class runtime_error : public exception {
        string message;
    public:
        runtime_error(const string&);
        virtual ~runtime_error();
    };

    inline runtime_error::runtime_error(const string& text)
        : exception(), message(text) {}

    inline runtime_error::~runtime_error() {}
}

struct S {
    unsigned char reserved[0x58];
    unsigned char flags;

    int open(int, int, int);
    int open_impl(int, int, int);
};

int S::open(int a, int b, int c)
{
    if (flags & 1)
        std::runtime_error(std::string("already open"));

    return open_impl(a, b, c);
}
