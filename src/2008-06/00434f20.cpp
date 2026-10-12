// from server: 89% by king_originala
struct TypeInfo {
    bool operator==(const TypeInfo&) const;
};

struct String {
    String(const String&);
    ~String();
};

struct Holder {
    virtual ~Holder();
    virtual void reserved();
    virtual Holder* clone() const;
};

struct TypeDescriptor {
    unsigned int reserved[2];
    const TypeInfo* info;
};

extern const TypeInfo stringType;
extern const String& __cdecl getString(Holder* const*);

struct Value {
    const TypeDescriptor* type;
    Holder* holder;

    Value(const Value&);
    ~Value();
    const String& convert() const;
    String getStringValue() const;
};

inline Value::Value(const Value& other)
{
    type = other.type;
    Holder* source = other.holder;
    Holder* copy = source ? source->clone() : 0;
    holder = copy;
}

inline Value::~Value()
{
    if (holder)
        delete holder;
}

String Value::getStringValue() const
{
    if (stringType == *type->info)
        return String(getString(&holder));

    Value temporary(*this);
    return String(temporary.convert());
}
