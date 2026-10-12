// from server: 87% by king_originala
namespace std
{
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class C, class Traits, class Alloc>
    class basic_string
    {
        char storage[32];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > Value;

struct StoredValue
{
    virtual ~StoredValue();
};

struct Holder
{
    StoredValue* value;
    Holder(const Value&);
    ~Holder();
    void swap(Holder&);
};

inline Holder::~Holder()
{
    if (value)
        delete value;
}

inline void Holder::swap(Holder& other)
{
    if (this != &other)
    {
        StoredValue* old = value;
        value = other.value;
        other.value = old;
    }
}

struct Result
{
    void* type;
    Holder holder;
};

extern void* __cdecl getType();

struct Accessor
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual Value get(void*) = 0;
};

struct Descriptor
{
    char padding[24];
    Accessor* accessor;
    void read(void*, Result*);
};

void Descriptor::read(void* object, Result* result)
{
    const Value& value = accessor->get(object);
    result->type = getType();
    Holder& destination = result->holder;
    Holder(value).swap(destination);
}
