// from server: 73% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
namespace std {
    class exception {
    protected:
        const char* message;
        int owned;
    public:
        virtual ~exception();
    };

    class bad_cast : public exception {
    public:
        bad_cast(const char*);
    };
}

struct Holder {
    virtual ~Holder() {}
    virtual void unused() = 0;
    virtual Holder* clone() const = 0;
};

struct Value {
    void* type;
    Holder* holder;

    Value(const Value&);
    ~Value();
    float* get();
};

inline Value::Value(const Value& other)
    : type(other.type), holder(other.holder ? other.holder->clone() : 0) {}

inline Value::~Value() {
    if (holder)
        delete holder;
}

struct Arguments {
    virtual void unused() = 0;
    virtual void read(int, Value*) = 0;
};

namespace RBX {
    namespace Reflection {
        struct DescribedBase {
            virtual ~DescribedBase();
        };
    }

    struct Humanoid : Reflection::DescribedBase {
        char padding[0x14c];
        int* adjustmentTable;
    };
}

typedef void (__thiscall *Setter)(void*, float);

struct S {
    char padding[0x38];
    Setter setter;
    int adjustment;
    int tableOffset;
    Value value;

    void invoke(RBX::Reflection::DescribedBase*, Arguments*);
};

void S::invoke(RBX::Reflection::DescribedBase* object, Arguments* arguments) {
    Value temporary(value);
    arguments->read(1, &temporary);

    RBX::Humanoid* humanoid = dynamic_cast<RBX::Humanoid*>(object);
    if (!humanoid)
        throw std::bad_cast("bad cast");

    float result = *temporary.get();
    int offset = *reinterpret_cast<int*>(
        reinterpret_cast<char*>(humanoid->adjustmentTable) + tableOffset);

    setter(reinterpret_cast<char*>(humanoid) + 0x150 + offset + adjustment,
           result);
}
