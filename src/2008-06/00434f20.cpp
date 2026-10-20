// from server: 95% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_variantcopyphase6ac481552a4501ec.cpp

// Candidate translation unit (score above; library headers required).
// from server: 89% by king_originala
 #include <intrin.h>
struct TypeInfo {
    __declspec(dllimport) bool operator==(const TypeInfo&) const;
};

#include <string>
typedef std::string String;

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
    _ReadWriteBarrier();
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
