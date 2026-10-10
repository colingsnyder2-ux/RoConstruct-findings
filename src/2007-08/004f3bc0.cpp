// from server: 36% by colin
struct S {
    float f0;
    int f4;
    int f8;
    char pad_c[0x1c];
    char str28[0x1c];
    char pad_44[0x1c];
    int f60;
    char pad_64[0x1c];
    S();
};

extern "C" void __stdcall GlobalMemoryStatus(void*);
extern "C" void __stdcall sub_46D4D0();
extern "C" void __stdcall sub_46D600();
extern "C" void __stdcall sub_472F80();
extern "C" float __stdcall sub_4F3110();
extern "C" void __stdcall sub_4F34E0();
extern "C" int __stdcall sub_4F35C0();
extern "C" void __stdcall sub_4F3AB0();

extern "C" void __stdcall sub_77E698(void*);
extern "C" void __stdcall sub_77E69C(void*, void*);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_77D21C(void*);

extern unsigned char byte_8BFABC;
extern unsigned char byte_8B5188;

S::S()
{
    float v;
    if (byte_8BFABC != 0) {
        v = sub_4F3110();
    } else {
        v = 0.0f;
    }
    f0 = v;

    sub_472F80();
    f4 = 0;
    f8 = sub_4F35C0();

    if (byte_8BFABC != 0) {
        sub_46D4D0();
    } else {
        sub_77E698((void*)0x79DED8);
        sub_77E69C(str28, (void*)0x79DED8);
        sub_77E6AC((void*)0x79DED8);
    }

    if (byte_8BFABC != 0) {
        sub_46D600();
    } else {
        sub_77E698((void*)0x79DED8);
        sub_77E69C(pad_44, (void*)0x79DED8);
        sub_77E6AC((void*)0x79DED8);
    }

    sub_4F34E0();
    sub_77D21C((void*)0x79DED8);
    f60 = 0;
    sub_4F3AB0();
}
