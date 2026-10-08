// from server: 67% by colin
// roc 2007-08 005b5a40  unit: RBX::VShirtGraphic::?$BoundPropGetSet  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5a40
//
// 005b5a40  51                   push ecx
// 005b5a41  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005b5a45  85c0                 test eax, eax
// 005b5a47  c7042400000000       mov dword ptr [esp], 0
// 005b5a4e  7405                 je 0x5b5a55
// 005b5a50  83c0fc               add eax, -4
// 005b5a53  eb02                 jmp 0x5b5a57
// 005b5a55  33c0                 xor eax, eax
// 005b5a57  56                   push esi
// 005b5a58  8b7108               mov esi, dword ptr [ecx + 8]
// 005b5a5b  57                   push edi
// 005b5a5c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005b5a60  03f0                 add esi, eax
// 005b5a62  56                   push esi
// 005b5a63  8bcf                 mov ecx, edi
// 005b5a65  ff159ce67700         call dword ptr [0x77e69c]
// 005b5a6b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005b5a6e  89471c               mov dword ptr [edi + 0x1c], eax
// 005b5a71  8bc7                 mov eax, edi
// 005b5a73  5f                   pop edi
// 005b5a74  5e                   pop esi
// 005b5a75  59                   pop ecx
// 005b5a76  c20800               ret 8

struct T_func_005b5a40 {
    char pad[8];
    int field8;
    int m(int, int);
};

extern "C" void* __stdcall sub_77e69c(void*, const void*);

int T_func_005b5a40::m(int a, int b)
{
    int* p = (int*)a;
    if (p != 0)
        p = (int*)((char*)p - 4);
    else
        p = 0;
    int* q = (int*)((char*)this->field8 + (int)p);
    sub_77e69c((void*)b, q);
    *(int*)(b + 0x1c) = *(int*)((char*)q + 0x1c);
    return b;
}
