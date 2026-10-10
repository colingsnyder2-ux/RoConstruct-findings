// from server: 22% by colin
struct S {
    char pad0[8];
    char field8;
    char pad9[0x24 - 9];
    char field24;
    char pad25[3];
    int field28;
    void f();
};

extern "C" void __stdcall G1_func_00544e60();
extern "C" void __cdecl G1_func_00982114(void*);
extern "C" void __stdcall G1_func_00b2263c();

void S::f()
{
    G1_func_00544e60();
    G1_func_00982114(*(void**)((char*)this + 0x28));
    *(int*)((char*)this + 0x28) = 0;
    G1_func_00b2263c();
}
