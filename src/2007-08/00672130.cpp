// from server: 49% by colin
struct S_func_00672130 {
    unsigned int f();
};

extern "C" void __cdecl func_006720b0(void*);
extern "C" unsigned int __cdecl func_006712f0(void*);
extern "C" void __cdecl func_00671db0(void*);

unsigned int g_008c8d10;
unsigned int g_008b5188;

unsigned int S_func_00672130::f()
{
    unsigned int result;
    unsigned int local;
    unsigned int cookie;

    cookie = g_008b5188 ^ (unsigned int)&local;
    local = 0;

    if (g_008c8d10 == 0) {
        func_006720b0((void*)0x7cb804);
        result = func_006712f0(&local);
        g_008c8d10 = result;
        if (result == 0) {
            result = 0x40000;
            g_008c8d10 = result;
        }
        func_00671db0(&local);
        return result;
    }

    return g_008c8d10;
}
