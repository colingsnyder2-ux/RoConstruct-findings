// from server: 78% by king_originala
struct Value {
    virtual ~Value();
    virtual void reserved();
    virtual Value* clone() const;
};

struct Argument {
    int value;
    Value* object;

    Argument(const Argument& other) {
        Value* source = other.object;
        value = other.value;
        object = source ? source->clone() : 0;
    }

    ~Argument() {
        if (object)
            delete object;
    }

    int* get();
};

struct Arguments {
    virtual void reserved();
    virtual void read(int index, Argument* value);
};

namespace RBX {
namespace Reflection {
struct DescribedBase {
    virtual ~DescribedBase();
};
}
}

struct WindowBase {};

struct __multiple_inheritance VDHTMLWindow
    : RBX::Reflection::DescribedBase, WindowBase {
};

struct BadCast {
    void* table;
    const char* message;
    int owned;
};

extern BadCast* (__thiscall *constructBadCast)(BadCast*, const char*);
extern unsigned char badCastThrowInfo;
extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);

struct S {
    char padding[56];
    void (VDHTMLWindow::*method)(int, int);
    Argument first;
    Argument second;

    void invoke(RBX::Reflection::DescribedBase*, Arguments*);
};

void S::invoke(RBX::Reflection::DescribedBase* instance, Arguments* arguments)
{
    Argument a(first);
    arguments->read(1, &a);

    Argument b(second);
    arguments->read(2, &b);

    VDHTMLWindow* window = dynamic_cast<VDHTMLWindow*>(instance);
    if (!window) {
        BadCast error;
        constructBadCast(&error, "bad cast");
        throwException(&error, &badCastThrowInfo);
    }

    (window->*method)(*a.get(), *b.get());
}
