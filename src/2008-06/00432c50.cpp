// from server: 43% by colin
// from server: 41% by colin
// roc 2008-06 00432c50  unit: RBX::CMarshalWindow  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432c50
//
// 00432c50  6aff                 push -1
// 00432c52  6803fe7b00           push 0x7bfe03
// 00432c57  64a100000000         mov eax, dword ptr fs:[0]
// 00432c5d  50                   push eax
// 00432c5e  64892500000000       mov dword ptr fs:[0], esp
// 00432c65  51                   push ecx
// 00432c66  a1c42d8000           mov eax, dword ptr [0x802dc4]
// 00432c6b  56                   push esi
// 00432c6c  8bf1                 mov esi, ecx
// 00432c6e  57                   push edi
// 00432c6f  33ff                 xor edi, edi
// 00432c71  897e04               mov dword ptr [esi + 4], edi
// 00432c74  897e14               mov dword ptr [esi + 0x14], edi
// 00432c77  89742408             mov dword ptr [esp + 8], esi
// 00432c7b  897e18               mov dword ptr [esi + 0x18], edi
// 00432c7e  897e1c               mov dword ptr [esi + 0x1c], edi
// 00432c81  894620               mov dword ptr [esi + 0x20], eax
// 00432c84  8d4e2c               lea ecx, [esi + 0x2c]
// 00432c87  897c2414             mov dword ptr [esp + 0x14], edi
// 00432c8b  c706501c8100         mov dword ptr [esi], 0x811c50
// 00432c91  897e24               mov dword ptr [esi + 0x24], edi
// 00432c94  e827fcffff           call 0x4328c0
// 00432c99  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00432c9d  57                   push edi
// 00432c9e  51                   push ecx
// 00432c9f  8bc4                 mov eax, esp
// 00432ca1  89642424             mov dword ptr [esp + 0x24], esp
// 00432ca5  57                   push edi
// 00432ca6  6800000080           push 0x80000000
// 00432cab  57                   push edi
// 00432cac  51                   push ecx
// 00432cad  894e28               mov dword ptr [esi + 0x28], ecx
// 00432cb0  8938                 mov dword ptr [eax], edi
// 00432cb2  8bc4                 mov eax, esp
// 00432cb4  89642434             mov dword ptr [esp + 0x34], esp
// 00432cb8  57                   push edi
// 00432cb9  8bce                 mov ecx, esi
// 00432cbb  c644243001           mov byte ptr [esp + 0x30], 1
// 00432cc0  8938                 mov dword ptr [eax], edi
// 00432cc2  e889feffff           call 0x432b50
// 00432cc7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00432ccb  5f                   pop edi
// 00432ccc  8bc6                 mov eax, esi
// 00432cce  64890d00000000       mov dword ptr fs:[0], ecx
// 00432cd5  5e                   pop esi
// 00432cd6  83c410               add esp, 0x10
// 00432cd9  c20400               ret 4
#include <intrin.h>

extern "C" void* __stdcall sub_4328C0();

struct CMarshalWindow {
    void* vtable;
    int field_4;
    char pad_8[12];
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    char pad_2c[4];

    CMarshalWindow(int arg);
    void sub_432B50(int a, int b, int c, int d, int e, int f);
};

CMarshalWindow::CMarshalWindow(int arg)
{
    vtable = (void*)0x811c50;
    _ReadWriteBarrier();
    field_4 = 0;
    field_14 = 0;
    field_18 = 0;
    field_1c = 0;
    field_20 = *(int*)0x802dc4;
    field_24 = 0;
    sub_4328C0();
    field_28 = arg;
    sub_432B50(arg, 0, 0x80000000, 0, 0, 0);
}
