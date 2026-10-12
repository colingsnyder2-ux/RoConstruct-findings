// from server: 86% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T *);
        basic_string(const basic_string &);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Callable {
    typedef void (__cdecl *Operation)(const void *, void *, int);
    Operation *manager;
    unsigned reserved;
    unsigned char storage[24];

    Callable(const Callable &);
    ~Callable();
};

Callable::Callable(const Callable &other) : manager(0) {
    if (other.manager) {
        manager = other.manager;
        other.manager[0](other.storage, storage, 0);
    }
}

Callable::~Callable() {
    if (manager)
        manager[0](storage, storage, 1);
}

struct Bound {
    unsigned char storage[80];
    Bound(const Bound &);
};

struct Result {
    unsigned char storage[8];
    Result(Bound, int);
};

void __cdecl callback();
Bound __cdecl bind_function(void (__cdecl *)(), Callable, String, int);

Result __cdecl make_result(const Callable &function, const char *name, int value) {
    return Result(bind_function(callback, function, String(name), value), 0);
}
