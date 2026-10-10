// from server: 10% by colin
struct RBXName;
struct ICreator;

struct S {
    char pad0[0x178];
    void* field178;
    char pad17c[0x4];
    void* field180;
    char pad184[0x4];
    void* field188;
    char pad18c[0xc];
    void* field198;
    char pad19c[0x4];
    void* field1a0;
    char pad1a4[0x10];
    char field1b4;
    char pad1b5[0x3];
    void* field1b8;
    void method();
};

extern "C" {
    void __stdcall sub_495820(void*);
    void __stdcall sub_5556d0(void*, void*);
    void __stdcall sub_40e750();
    void __stdcall sub_487c10();
    void __stdcall sub_630d36();
    void __stdcall sub_77e6d8();
    void __stdcall sub_77e6a4();
    void __stdcall sub_77e5f8();
    void __stdcall sub_77e698();
    void __stdcall sub_77e558();
    void __stdcall sub_77e644();
    void __stdcall sub_77e568();
    void __stdcall sub_77e690();
    void __stdcall sub_77e6ac();
    void __stdcall sub_77e69c();
    void __stdcall sub_630d60();
    void __stdcall sub_4e0180();
    void __stdcall sub_555530();
    void __stdcall sub_50b1c0();
    void __stdcall sub_50b200();
    void __stdcall sub_736ed0();
    void __stdcall sub_45a430();
    void __stdcall sub_5450b0();
    void __stdcall sub_57dc00();
    void __stdcall sub_59c590();
}

void S::method()
{
    void* arg = *(void**)((char*)this + 0x10c);
    if (arg == 0)
        return;

    void* p188 = *(void**)((char*)this + 0x188);
    void* p = (char*)p188 + 0x158;
    void* vtbl = *(void**)p;
    void (*fn)(void*, void*) = *(void (**)(void*, void*))((char*)vtbl + 8);
    fn(p, arg);

    sub_495820(this);
    void* p180;
    if (*(int*)0 == 0) {
        p180 = *(void**)((char*)this + 0x180);
    } else {
        p180 = *(void**)((char*)this + 0x198);
    }
    sub_5556d0(arg, p180);

    void* p1a0 = *(void**)((char*)this + 0x1a0);
    void* vtbl2 = *(void**)p1a0;
    void (*fn2)(void*, void*) = *(void (**)(void*, void*))((char*)vtbl2 + 0x64);
    fn2(p1a0, arg);

    sub_40e750();
    void* p138 = *(void**)((char*)this + 0x138);
    if (p138 != 0) {
        int count = 0;
        sub_487c10();
        if (count < 0) {
            // loop
        }
    }
}
