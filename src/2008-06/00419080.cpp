// from server: 70% by colin
struct VCLuaFunction {
    long __stdcall f(void* p1, void* p2, void* p3);
};

extern "C" void __stdcall sub_404A80(void* p);

extern void* g_92c624;
extern char g_92c618;

long __stdcall VCLuaFunction::f(void* p1, void* p2, void* p3)
{
    if (p1 != 0)
        return (long)0x8002000b;

    if (p2 == 0)
        return (long)0x80004003;

    if (g_92c624 == 0)
        sub_404A80(p3);

    *(void**)p2 = g_92c624;

    if (g_92c624 != 0) {
        void** vtbl = *(void***)g_92c624;
        void (*fn)(void*) = (void (*)(void*))vtbl[1];
        fn(g_92c624);
    }

    return 0;
}
