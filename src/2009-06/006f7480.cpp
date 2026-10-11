// from server: 71% by atomic.potato
struct S {
    char pad0[0x18];
    int field18;
    int field1c;
    char pad2[0x8];
    char field28;
    int method0();
    int method28();
    int method();
};

extern "C" int __stdcall sub_006b2af0(int);
extern "C" int __stdcall sub_0061d4a0(const char*, int);

int S::method()
{
    if (field28 != 0) {
        sub_006b2af0(field1c);
        int v = method0();
        field28 = 0;
        const char* p;
        if (*(int*)(v + 0x18) < 0x10)
            p = (const char*)(v + 4);
        else
            p = *(const char**)(v + 4);
        sub_0061d4a0(p, field18);
    }
    method28();
    return 0;
}
