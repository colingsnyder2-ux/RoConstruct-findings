// from server: 41% by colin
// roc 2007-08 005fe380  unit: RBX::AxisMoveTool  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe380
//
// 005fe380  6aff                 push -1
// 005fe382  681bb67500           push 0x75b61b
// 005fe387  64a100000000         mov eax, dword ptr fs:[0]
// 005fe38d  50                   push eax
// 005fe38e  64892500000000       mov dword ptr fs:[0], esp
// 005fe395  51                   push ecx
// 005fe396  56                   push esi
// 005fe397  6a78                 push 0x78
// 005fe399  8bf1                 mov esi, ecx
// 005fe39b  e8561b0300           call 0x62fef6
// 005fe3a0  83c404               add esp, 4
// 005fe3a3  89442404             mov dword ptr [esp + 4], eax
// 005fe3a7  85c0                 test eax, eax
// 005fe3a9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fe3b1  741b                 je 0x5fe3ce
// 005fe3b3  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005fe3b6  51                   push ecx
// 005fe3b7  8bc8                 mov ecx, eax
// 005fe3b9  e852feffff           call 0x5fe210
// 005fe3be  5e                   pop esi
// 005fe3bf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fe3c3  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe3ca  83c410               add esp, 0x10
// 005fe3cd  c3                   ret 
// 005fe3ce  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe3d2  33c0                 xor eax, eax
// 005fe3d4  5e                   pop esi
// 005fe3d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe3dc  83c410               add esp, 0x10
// 005fe3df  c3                   ret 

struct AxisMoveTool {
    char pad[0x18];
    int field18;
    void init(int);

    void sub_5FE380();
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);

void AxisMoveTool::sub_5FE380()
{
    void* p = sub_62FEF6(0x78);
    if (p) {
        ((AxisMoveTool*)p)->init(field18);
    }
}
