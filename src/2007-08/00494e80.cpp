// from server: 45% by colin
struct SignalDesc {
    void init();
};

extern "C" void __cdecl sub_418690();
extern "C" void __cdecl sub_630D23();

struct SomeClass {
    void method();
};

extern SomeClass g_obj;

void SignalDesc::init()
{
    static int initialized = 0;
    if (!(initialized & 1)) {
        initialized |= 1;
        sub_418690();
        g_obj.method();
        sub_630D23();
    }
}
