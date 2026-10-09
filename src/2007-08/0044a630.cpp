// from server: 35% by colin
// roc 2007-08 0044a630  unit: CRobloxModule  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a630
//
// 0044a630  6aff                 push -1
// 0044a632  68b3fe7300           push 0x73feb3
// 0044a637  64a100000000         mov eax, dword ptr fs:[0]
// 0044a63d  50                   push eax
// 0044a63e  51                   push ecx
// 0044a63f  56                   push esi
// 0044a640  a188518b00           mov eax, dword ptr [0x8b5188]
// 0044a645  33c4                 xor eax, esp
// 0044a647  50                   push eax
// 0044a648  8d44240c             lea eax, [esp + 0xc]
// 0044a64c  64a300000000         mov dword ptr fs:[0], eax
// 0044a652  8bf1                 mov esi, ecx
// 0044a654  89742408             mov dword ptr [esp + 8], esi
// 0044a658  33c0                 xor eax, eax
// 0044a65a  894604               mov dword ptr [esi + 4], eax
// 0044a65d  894608               mov dword ptr [esi + 8], eax
// 0044a660  89460c               mov dword ptr [esi + 0xc], eax
// 0044a663  894610               mov dword ptr [esi + 0x10], eax
// 0044a666  8d4e14               lea ecx, [esi + 0x14]
// 0044a669  89442414             mov dword ptr [esp + 0x14], eax
// 0044a66d  e88eb02d00           call 0x725700
// 0044a672  8d4e1c               lea ecx, [esi + 0x1c]
// 0044a675  c644241401           mov byte ptr [esp + 0x14], 1
// 0044a67a  ff15a4e67700         call dword ptr [0x77e6a4]
// 0044a680  8bc6                 mov eax, esi
// 0044a682  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044a686  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a68d  59                   pop ecx
// 0044a68e  5e                   pop esi
// 0044a68f  83c410               add esp, 0x10
// 0044a692  c3                   ret 

struct CRobloxModule
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char field14[8];
    char field1C[4];
    CRobloxModule();
};

extern "C" void __stdcall sub_725700();
extern "C" void __stdcall sub_77e6a4();

CRobloxModule::CRobloxModule()
{
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    sub_725700();
    sub_77e6a4();
}
