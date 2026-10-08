// from server: 62% by colin
// roc 2007-08 00574590  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574590
//
// 00574590  8b442404             mov eax, dword ptr [esp + 4]
// 00574594  85c0                 test eax, eax
// 00574596  8bd1                 mov edx, ecx
// 00574598  7405                 je 0x57459f
// 0057459a  83c0fc               add eax, -4
// 0057459d  eb02                 jmp 0x5745a1
// 0057459f  33c0                 xor eax, eax
// 005745a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005745a5  56                   push esi
// 005745a6  8b7220               mov esi, dword ptr [edx + 0x20]
// 005745a9  51                   push ecx
// 005745aa  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 005745b0  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005745b3  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005745b6  8b5218               mov edx, dword ptr [edx + 0x18]
// 005745b9  8d8c01ec000000       lea ecx, [ecx + eax + 0xec]
// 005745c0  ffd2                 call edx
// 005745c2  5e                   pop esi
// 005745c3  c20800               ret 8

struct S_00574590
{
    char pad[0x18];
    int (__stdcall *fn)(int, int);
    char pad2[0x4];
    int idx;
    char pad3[0x4];
    int base;
    int (__stdcall *getter)(int);

    int f(int a, int b);
};

int S_00574590::f(int a, int b)
{
    int* p = (int*)a;
    if (p != 0)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int off = *(int*)((char*)this + 0x20);
    int v = *(int*)((char*)p + 0xec);
    v = *(int*)(v + off);
    v += *(int*)((char*)this + 0x1c);
    int (__stdcall *g)(int) = *(int (__stdcall **)(int))((char*)this + 0x18);
    return g(v + (int)p + 0xec);
}
