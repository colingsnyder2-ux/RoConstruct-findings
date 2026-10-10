// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    void __stdcall G1_func_00412dc0();
    void __stdcall G1_func_004919b0();
    void __stdcall G1_func_00491a70();
    void __stdcall G1_func_004924d0();
    void __stdcall G1_func_004976f0();
    void __stdcall G1_func_0049f820();
    void __stdcall G1_func_0049f930();
    void __stdcall G1_func_004a0590();
    void __stdcall G1_func_004a05c0();
    void __stdcall G1_func_004a0660();
    char __stdcall G1_func_004a4100(void*, void*);
    void* __stdcall G1_func_004a41a0(void*, void*);
    void __stdcall G1_func_00630a1e();
    void __stdcall G1_func_00630b9e();
    void __stdcall G1_func_0077e698();
    void __stdcall G1_func_0077e69c();
    void __stdcall G1_func_0077e6ac();
}

struct S {
    char pad[0x138];
    void* field_138;
    void* field_13c;
    void* field_140;
    void* field_144;
    char pad2[0xe8];
    void func_004980b0(int, int, int, int, int, int, int);
};

void S::func_004980b0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    if (field_138 == 0) {
        G1_func_0077e698();
        G1_func_00412dc0();
        G1_func_00630b9e();
    }
    if (G1_func_004a4100(field_144, field_138)) {
        G1_func_0049f820();
        G1_func_004a05c0();
        G1_func_004a41a0(field_144, field_138);
        G1_func_004a0590();
        G1_func_004a0660();
        G1_func_004976f0();
        G1_func_004919b0();
    } else {
        G1_func_0077e69c();
        if (field_13c) {
            _InterlockedExchangeAdd((volatile long*)((char*)field_13c + 4), 1);
        }
        if (field_13c) {
            _InterlockedExchangeAdd((volatile long*)((char*)field_13c + 4), 1);
        }
        G1_func_004976f0();
        G1_func_004919b0();
    }
    G1_func_0077e6ac();
    G1_func_00630a1e();
}
