// from server: 60% by king_originala
namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator> class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Owner {
    virtual ~Owner();
};

struct Guard {
    unsigned char reserved[4];
    Owner* volatile value;
    unsigned char padding[12];
    ~Guard();
};

Guard::~Guard()
{
    Owner* p = value;
    if (p)
        delete p;
}

struct BoundFuncDesc {
    unsigned char reserved[56];
    void (__thiscall *callback)(void*, String);
    int adjustment;

    void invoke(void* object, Owner* owner);
};

void BoundFuncDesc::invoke(void* object, Owner* owner)
{
    Guard guard;
    guard.value = owner;
    callback(static_cast<char*>(object) + adjustment,
             *static_cast<const String*>(object));
}
