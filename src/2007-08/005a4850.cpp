// from server: 43% by colin
struct Instance {
    static Instance* fastDynamicCast(Instance*);
};

struct PartInstance : Instance {
};

struct IControllable {
    void* getPart();
};

struct T_func_005a4850 {
    void* __cdecl m(Instance*);
};

extern "C" {
    void* __stdcall sub_0053e7a0(void*, void*, void*, void*, void*);
    void* __stdcall sub_00630d36(void*);
    void* __stdcall sub_0077e698(void*, const char*);
    void* __stdcall sub_0077e6ac(void*);
}

void* T_func_005a4850::m(Instance* a)
{
    void* result = 0;
    if (a != 0) {
        char buf[32];
        sub_0077e698(buf, "Head");
        void* v = sub_0053e7a0(a, buf, (void*)0x881f4c, (void*)0x884a28, 0);
        result = sub_00630d36(v);
        sub_0077e6ac(buf);
    }
    return result;
}
