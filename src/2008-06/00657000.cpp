// from server: 81% by king_originala
typedef unsigned int size_t;

extern "C" {
    extern void* (__cdecl *malloc)(size_t);
}
extern void (__thiscall *destroy_string)(void*);

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        ~basic_string();
    };

    template<class T, class Traits, class Allocator>
    inline basic_string<T, Traits, Allocator>::~basic_string()
    {
        destroy_string(this);
    }

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

inline void* operator new(size_t size) throw()
{
    return malloc(size);
}

void operator delete(void*) throw();

struct Empty {
    volatile unsigned char value;
    Empty();
};

inline Empty::Empty() : value(0) {}

struct Object {
    unsigned char storage[0x15c];
    Object(const std::string&, int, int);
};

struct Result {
    Object* pointer;
    void* control;
    Result(Object*, Empty);
    ~Result();
};

Result create(std::string text, int value)
{
    return Result(new Object(text, value, 0), Empty());
}
