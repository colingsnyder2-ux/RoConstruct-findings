// from server: 93% by king_originala
namespace std
{
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string
    {
        unsigned int storage[7];

    public:
        basic_string(const basic_string&);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Base
{
    unsigned int data[2];

    Base(void* context, String name);
    virtual ~Base();
};

struct ClearBackpack : Base
{
    void* owner;
    void* backpack;
    unsigned int field14;
    unsigned int field18;

    ClearBackpack(String name, void* object);
    virtual ~ClearBackpack();
};

ClearBackpack::ClearBackpack(String name, void* object)
    : Base(object ? static_cast<char*>(object) + 0x2ec : 0, name),
      owner(object),
      backpack(object),
      field14(0),
      field18(0)
{
}
