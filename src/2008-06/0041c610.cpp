// from server: 99% by colin
namespace std {
    class bad_cast {
        const char* message;
        int owned;
    public:
        __declspec(dllimport) explicit bad_cast(const char*);
        virtual ~bad_cast();
    };
}

struct Value {
    virtual ~Value();
    virtual void reserved();
    virtual Value* clone() const;
};

inline Value* copyValue(Value* source) {
    if (source)
        return source->clone();
    return 0;
}

struct Argument {
    unsigned long value;
    Value* object;

    Argument(const Argument&);
    ~Argument();
};

inline Argument::Argument(const Argument& other)
    : value(other.value), object(copyValue(other.object)) {}

inline Argument::~Argument() {
    if (object)
        delete object;
}

namespace RBX {
    namespace Reflection {
        struct DescribedBase {
            virtual ~DescribedBase();
        };
    }
}

struct VDHTMLWindow : RBX::Reflection::DescribedBase {};

struct Arguments {
    virtual void reserved();
    virtual void set(int, Argument*);
};

struct S {
    char padding[64];
    Argument first;
    Argument second;
    Argument third;

    void invoke(RBX::Reflection::DescribedBase*, Arguments*);
    void dispatch(VDHTMLWindow*, void*, Argument*, Argument*, Argument*);
};

void S::invoke(RBX::Reflection::DescribedBase* instance, Arguments* arguments) {
    Argument a(first);
    arguments->set(1, &a);

    Argument b(second);
    arguments->set(2, &b);

    Argument c(third);
    arguments->set(3, &c);

    VDHTMLWindow* window = dynamic_cast<VDHTMLWindow*>(instance);
    if (!window)
        throw std::bad_cast("bad cast");

    dispatch(window, reinterpret_cast<char*>(arguments) + 4, &a, &b, &c);
}
