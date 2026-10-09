// from server: 34% by colin
// roc 2007-08 005776a0  unit: RBX::Part::W4PartType::?$EnumDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005776a0
//
// 005776a0  c70000000000         mov dword ptr [eax], 0
// 005776a6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005776ae  89642430             mov dword ptr [esp + 0x30], esp
// 005776b2  8911                 mov dword ptr [ecx], edx
// 005776b4  8b542420             mov edx, dword ptr [esp + 0x20]
// 005776b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005776bc  52                   push edx
// 005776bd  50                   push eax
// 005776be  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005776c3  e838faffff           call 0x577100
// 005776c8  50                   push eax
// 005776c9  8bce                 mov ecx, esi
// 005776cb  c644242000           mov byte ptr [esp + 0x20], 0
// 005776d0  e80bdcecff           call 0x4452e0
// 005776d5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005776d9  51                   push ecx
// 005776da  e883850b00           call 0x62fc62
// 005776df  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005776e3  83c404               add esp, 4
// 005776e6  c706f4ac7a00         mov dword ptr [esi], 0x7aacf4
// 005776ec  8bc6                 mov eax, esi
// 005776ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005776f5  5e                   pop esi
// 005776f6  83c40c               add esp, 0xc
// 005776f9  c22400               ret 0x24

struct EnumDesc
{
    void construct(int a, int b, int c, int d, int e, int f, int g, int h, int i);
};

extern "C" void __cdecl func_00577100();
extern "C" void __cdecl func_004452e0();
extern "C" void __cdecl func_0062fc62();

void EnumDesc::construct(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    *(int*)0 = 0;
    *(int*)((char*)this + 0x00) = 0x7aacf4;
    func_00577100();
    func_004452e0();
    func_0062fc62();
}
