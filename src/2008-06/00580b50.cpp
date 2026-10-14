// from server: 95% by colin
namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        __declspec(dllimport) basic_string(const basic_string&);
        __declspec(dllimport) ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Product;

struct Source {
    Product* getProduct();
};

extern "C" void __cdecl initializeProduct(void*, Product*);

struct Base {
    unsigned int data[2];

    Base(int, String);
    virtual ~Base();
};

struct ClearStarterpack : Base {
    Product* product;
    void* productOwner;
    Source* source;
    unsigned int first;
    unsigned int second;
    Source* savedSource;

    ClearStarterpack(int, String, Source*);
    virtual ~ClearStarterpack();
};

ClearStarterpack::ClearStarterpack(int value, String name, Source* owner)
    : Base(value, name)
{
    initializeProduct(&product, owner ? owner->getProduct() : 0);
    source = owner;
    first = 0;
    second = 0;
    savedSource = owner;
}
