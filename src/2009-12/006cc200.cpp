// roc 2009-12 006cc200  unit: RBX::P8PartInstance::?$GetSetImpl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cc200
//
// 006cc200  8b442404             mov eax, dword ptr [esp + 4]
// 006cc204  8bd1                 mov edx, ecx
// 006cc206  85c0                 test eax, eax
// 006cc208  7405                 je 0x6cc20f
// 006cc20a  83c0e4               add eax, -0x1c
// 006cc20d  eb02                 jmp 0x6cc211
// 006cc20f  33c0                 xor eax, eax
// 006cc211  56                   push esi
// 006cc212  8b7220               mov esi, dword ptr [edx + 0x20]
// 006cc215  51                   push ecx
// 006cc216  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cc21a  d901                 fld dword ptr [ecx]
// 006cc21c  8b8898000000         mov ecx, dword ptr [eax + 0x98]
// 006cc222  8b0c31               mov ecx, dword ptr [ecx + esi]
// 006cc225  d91c24               fstp dword ptr [esp]
// 006cc228  034a1c               add ecx, dword ptr [edx + 0x1c]
// 006cc22b  8b5218               mov edx, dword ptr [edx + 0x18]
// 006cc22e  8d8c0198000000       lea ecx, [ecx + eax + 0x98]
// 006cc235  ffd2                 call edx
// 006cc237  5e                   pop esi
// 006cc238  c20800               ret 8
// copied from an identical function in another client (function ?f@P8PartInstance_GetSetImpl@ns_ROCX00000b@@QAEXHPAM@Z)

namespace ns_ROCX00000b {
// from server: 100% by atomic.potato
struct P8PartInstance_GetSetImpl {
    void f(int a, float* b);
};

void P8PartInstance_GetSetImpl::f(int a, float* b) {
    char* p;
    if (a != 0)
        p = (char*)a - 0x1c;
    else
        p = 0;
    int esi = *(int*)((char*)this + 0x20);
    float val = *b;
    int ecx = *(int*)(p + 0x98);
    ecx = *(int*)(ecx + esi);
    ecx += *(int*)((char*)this + 0x1c);
    int edx = *(int*)((char*)this + 0x18);
    ecx = ecx + (int)p + 0x98;
    ((void (__thiscall*)(int, float))edx)(ecx, val);
}
}
