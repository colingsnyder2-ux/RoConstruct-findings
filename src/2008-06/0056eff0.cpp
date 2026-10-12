// from server: 82% by king_originala
struct type_info {
    bool operator==(const type_info&) const;
};

extern type_info string_type;

struct String {
    char data[28];
    ~String();
};

struct Value : String {
    Value(const String&);
};

struct placeholder {
    virtual ~placeholder();
    virtual const type_info& type() const = 0;
};

struct any {
    placeholder* content;

    any(const Value&);
    ~any();
    any& swap(any&);
};

inline any::~any()
{
    if (content)
        delete content;
}

inline any& any::swap(any& other)
{
    if (this != &other) {
        placeholder* old = other.content;
        other.content = content;
        content = old;
    }
    return *this;
}

extern String __cdecl extractString(const any&);

struct Type {
    char padding[8];
    const type_info* info;
};

extern Type* __cdecl valueType();

struct Descriptor {
    Type* type;
    any value;

    void finish();
    void convert();
};

void Descriptor::convert()
{
    if (string_type == *type->info) {
        any(Value(extractString(value))).swap(value);
        type = valueType();
    }
    finish();
}
