// roc 2011-06 0068d270  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068d270
//
// 0068d270  8b442404             mov eax, dword ptr [esp + 4]
// 0068d274  8bd1                 mov edx, ecx
// 0068d276  85c0                 test eax, eax
// 0068d278  7405                 je 0x68d27f
// 0068d27a  83c0e4               add eax, -0x1c
// 0068d27d  eb02                 jmp 0x68d281
// 0068d27f  33c0                 xor eax, eax
// 0068d281  51                   push ecx
// 0068d282  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068d286  d901                 fld dword ptr [ecx]
// 0068d288  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0068d28b  8b5208               mov edx, dword ptr [edx + 8]
// 0068d28e  d91c24               fstp dword ptr [esp]
// 0068d291  03c8                 add ecx, eax
// 0068d293  ffd2                 call edx
// 0068d295  c20800               ret 8
// copied from an identical function in another client (function ?f@S@@QAEXPAXPAM@Z)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
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