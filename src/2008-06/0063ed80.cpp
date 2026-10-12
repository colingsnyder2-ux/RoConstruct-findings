// from server: 72% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        void update(int value);
    };
}

extern RBX::ServiceProvider* __cdecl func_005807b0(RBX::Instance* p);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    long strong;
    long weak;
};

struct Object {
    void func_00598c70();
    bool func_0059e150(int value, int argument);
    void func_00598c90();
};

struct Pair {
    Object* object;
    Control* control;
    Pair* func_005cab00(Pair* result);
};

struct ResizeTool {
    char padding0[0x18];
    RBX::Instance* owner;
    char padding1[4];
    Pair reference;
    int padding2;
    int value;

    void func_0063ed80(int argument);
};

void ResizeTool::func_0063ed80(int argument)
{
    if (reference.control && reference.control->strong) {
        Pair temporary;
        Object* object = reference.func_005cab00(&temporary)->object;
        Control* control = temporary.control;

        if (control) {
            if (_InterlockedExchangeAdd(&control->strong, -1) == 1) {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                    control->destroy();
            }
        }

        object->func_00598c70();
        if (object->func_0059e150(value, argument))
            func_005807b0(owner)->update(4);
        object->func_00598c90();
    }
}
