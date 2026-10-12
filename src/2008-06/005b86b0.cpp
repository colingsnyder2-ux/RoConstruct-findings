// from server: 88% by king_originala
namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const basic_string&);
        ~basic_string();
    };

    class type_info {
    public:
        bool operator==(const type_info&) const;
    };
}

struct SoundId {
    std::basic_string<char, std::char_traits<char>, std::allocator<char> > text;
    int value;
};

struct Payload {
    virtual ~Payload();
    virtual void reserved();
    virtual Payload* clone() const;
};

struct Descriptor {
    unsigned char padding[8];
    const std::type_info* type;
};

extern const std::type_info soundType;
extern const SoundId& __cdecl directSound(Payload* const*);

struct Product {
    const Descriptor* descriptor;
    Payload* payload;

    Product(const Descriptor*, Payload*);
    ~Product();
    const SoundId& convert() const;
    SoundId get() const;
};

inline Product::Product(const Descriptor* d, Payload* p)
    : descriptor(d), payload(p) {}

inline Product::~Product() {
    if (payload)
        delete payload;
}

SoundId Product::get() const {
    if (soundType == *descriptor->type)
        return directSound(&payload);

    return Product(descriptor, payload ? payload->clone() : 0).convert();
}
