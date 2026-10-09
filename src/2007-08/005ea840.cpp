// from server: 23% by colin
// roc 2007-08 005ea840  unit: RBX::VFlagStandService::?$FactoryProduct  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ea840
//
// 005ea840  c70000000000         mov dword ptr [eax], 0
// 005ea846  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ea84e  89642430             mov dword ptr [esp + 0x30], esp
// 005ea852  8911                 mov dword ptr [ecx], edx
// 005ea854  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ea858  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ea85c  52                   push edx
// 005ea85d  50                   push eax
// 005ea85e  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ea863  e8386afaff           call 0x5912a0
// 005ea868  50                   push eax
// 005ea869  8bce                 mov ecx, esi
// 005ea86b  c644242000           mov byte ptr [esp + 0x20], 0
// 005ea870  e86bd8e9ff           call 0x4880e0
// 005ea875  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005ea879  51                   push ecx
// 005ea87a  e8e3530400           call 0x62fc62
// 005ea87f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ea883  83c404               add esp, 4
// 005ea886  c7066ce17b00         mov dword ptr [esi], 0x7be16c
// 005ea88c  8bc6                 mov eax, esi
// 005ea88e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ea895  5e                   pop esi
// 005ea896  83c40c               add esp, 0xc
// 005ea899  c22400               ret 0x24

struct FactoryProduct {
    void construct(int, int, int, int, int, int, int, int, int);
};

void FactoryProduct::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
    int local = 0;
    *(int*)a1 = 0;
    *(int*)a2 = 0;
    *(int*)a3 = 0;
    *(int*)a4 = 0;
    *(int*)a5 = 0;
    *(int*)a6 = 0;
    *(int*)a7 = 0;
    *(int*)a8 = 0;
    *(int*)a9 = 0;
}
