// from server: 34% by tester
struct VDHTMLWindow_BoundFuncDesc {
    char pad0[0x28];
    void (__stdcall *fn28)(int);
    int field2c;
    int field30;
    void *field34;
    void invoke(int a, int b);
};

struct RefCounted {
    void **vtable;
    void (__stdcall *release)(int);
};

extern "C" void *__stdcall sub_630d36(int, int, int, int, int);
extern "C" void __stdcall sub_630b9e(void *, void *);
extern "C" void __stdcall sub_56d040(void *);
extern "C" void __stdcall sub_56cef0(void *, void *);

extern "C" void *__stdcall sub_77e710(void *);

void VDHTMLWindow_BoundFuncDesc::invoke(int a, int b)
{
    int local0;
    int local4;
    void *local8;
    int localc;
    int local10;
    int local14;
    int local18;
    int local1c;
    int local20;
    int local24;
    int local28;
    int local2c;
    int local30;
    int local34;
    int local38;
    int local3c;
    int local40;
    int local44;
    int local48;
    int local4c;
    int local50;
    int local54;
    int local58;
    int local5c;
    int local60;
    int local64;
    int local68;
    int local6c;
    int local70;
    int local74;
    int local78;
    int local7c;
    int local80;
    int local84;
    int local88;

    local0 = 0;
    local4 = 0;
    local8 = 0;
    localc = 0;
    local10 = 0;
    local14 = 0;
    local18 = 0;
    local1c = 0;
    local20 = 0;
    local24 = 0;
    local28 = 0;
    local2c = 0;
    local30 = 0;
    local34 = 0;
    local38 = 0;
    local3c = 0;
    local40 = 0;
    local44 = 0;
    local48 = 0;
    local4c = 0;
    local50 = 0;
    local54 = 0;
    local58 = 0;
    local5c = 0;
    local60 = 0;
    local64 = 0;
    local68 = 0;
    local6c = 0;
    local70 = 0;
    local74 = 0;
    local78 = 0;
    local7c = 0;
    local80 = 0;
    local84 = 0;
    local88 = 0;

    localc = field30;
    if (field34) {
        local10 = ((int (__stdcall *)(void *))(*(void ***)field34)[2])(field34);
    } else {
        local10 = 0;
    }

    ((void (__stdcall *)(int, int, int *))(*(void ***)a)[1])(a, 1, &localc);

    local28 = 0;
    void *result = sub_630d36(local10, 0, (int)0x88209c, (int)0x882bc0, 0);
    if (result == 0) {
        sub_77e710((void *)0x786e04);
        sub_630b9e((void *)0x841e0c, (void *)0x786e04);
    }

    sub_56d040(&localc);
    sub_56cef0(&localc, &localc);
    fn28(field2c + (int)result);
    if (local10) {
        ((void (__stdcall *)(int))(*(void ***)local10)[0])(1);
    }
}
