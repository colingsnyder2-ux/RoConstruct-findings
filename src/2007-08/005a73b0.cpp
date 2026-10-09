// from server: 24% by colin
// roc 2007-08 005a73b0  unit: RBX::VHumanoid::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a73b0
//
// 005a73b0  c70000000000         mov dword ptr [eax], 0
// 005a73b6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a73be  89642430             mov dword ptr [esp + 0x30], esp
// 005a73c2  8911                 mov dword ptr [ecx], edx
// 005a73c4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a73c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a73cc  52                   push edx
// 005a73cd  50                   push eax
// 005a73ce  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a73d3  e8e871feff           call 0x58e5c0
// 005a73d8  50                   push eax
// 005a73d9  8bce                 mov ecx, esi
// 005a73db  c644242000           mov byte ptr [esp + 0x20], 0
// 005a73e0  e8dbdbfcff           call 0x574fc0
// 005a73e5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005a73e9  51                   push ecx
// 005a73ea  e873880800           call 0x62fc62
// 005a73ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a73f3  83c404               add esp, 4
// 005a73f6  c70624567b00         mov dword ptr [esi], 0x7b5624
// 005a73fc  8bc6                 mov eax, esi
// 005a73fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7405  5e                   pop esi
// 005a7406  83c40c               add esp, 0xc
// 005a7409  c22400               ret 0x24

struct FactoryProduct {
    void* vfptr;
    char pad[0x24];
    void construct();
};

extern "C" void __stdcall sub_58e5c0(int, int);
extern "C" void __stdcall sub_574fc0(void*);
extern "C" void __stdcall sub_62fc62(void*);

void FactoryProduct::construct()
{
    *(int*)this = 0;
    *(int*)((char*)this + 0x14) = 0;
    *(void**)((char*)this + 0x30) = (void*)0;
    *(int*)((char*)this + 0x0) = 0;
    sub_58e5c0(*(int*)((char*)this + 0x1c), *(int*)((char*)this + 0x20));
    sub_574fc0((void*)this);
    sub_62fc62(*(void**)((char*)this + 0x34));
    *(void**)this = (void*)0x7b5624;
}
