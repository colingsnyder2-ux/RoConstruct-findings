// from server: 90% by king_originala
namespace std {
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;

    class exception {
        const char* message;
        int owned;
    public:
        virtual ~exception();
        virtual const char* what() const;
    };

    class runtime_error : public exception {
        string message;
    public:
        runtime_error(const string&);
        virtual ~runtime_error();
    };
}

struct Stream {
    bool read(int*, int, int);
};

struct Property;

struct PropertyTable {
    void* entries[13];
    void (__thiscall* set)(Property*, void*, int);
};

struct EnumInfo {
    unsigned char reserved[44];
    int count;
};

struct Property {
    PropertyTable* table;
    unsigned char reserved[20];
    EnumInfo* info;
};

struct Descriptor {
    Property* property;
    void* object;
};

void deserializeEnum(Descriptor* descriptor, Stream* stream)
{
    Property* property = descriptor->property;
    int value = 0;

    if (!stream->read(&value, property->info->count + 1, 1))
        throw std::runtime_error(std::string("deserializeEnum failed"));

    if (descriptor->object)
        property->table->set(property, descriptor->object, value);
}
