// from server: 73% by colin
struct VCAppComObject {
    long __stdcall QueryInterface(void* ppvObject, const void* riid, void** ppv);
};

extern "C" void __stdcall sub_4055F0(void*);

extern void* g_88175C;
extern char g_881750;

long __stdcall VCAppComObject::QueryInterface(void* ppvObject, const void* riid, void** ppv)
{
    if (ppv == 0)
        return (long)0x80004003;

    if (g_88175C == 0)
        sub_4055F0(&g_881750);

    *(void**)ppv = g_88175C;
    if (g_88175C != 0) {
        void** vtbl = *(void***)g_88175C;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[1];
        fn(g_88175C);
    }
    return 0;
}
