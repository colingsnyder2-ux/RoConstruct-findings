// roc 2010-06 006e1ac0  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e1ac0
//
// 006e1ac0  8b442404             mov eax, dword ptr [esp + 4]
// 006e1ac4  8bd1                 mov edx, ecx
// 006e1ac6  85c0                 test eax, eax
// 006e1ac8  7405                 je 0x6e1acf
// 006e1aca  83c0e4               add eax, -0x1c
// 006e1acd  eb02                 jmp 0x6e1ad1
// 006e1acf  33c0                 xor eax, eax
// 006e1ad1  51                   push ecx
// 006e1ad2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e1ad6  d901                 fld dword ptr [ecx]
// 006e1ad8  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 006e1adb  8b5208               mov edx, dword ptr [edx + 8]
// 006e1ade  d91c24               fstp dword ptr [esp]
// 006e1ae1  03c8                 add ecx, eax
// 006e1ae3  ffd2                 call edx
// 006e1ae5  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000016@@QAEXPAXPAM@Z)

namespace ns_ROCX000016 {
struct S
{
    void f(void*, float*);
};

void S::f(void* object, float* value)
{
    char* base = (char*)object;
    if (base != 0)
        base -= 0x1c;
    else
        base = 0;

    void** table = *(void*** )((char*)this + 8);
    char* target = *(char**)((char*)this + 0xc);
    ((void (__thiscall *)(char*, float))table)(target + (int)base, *value);
}
}
