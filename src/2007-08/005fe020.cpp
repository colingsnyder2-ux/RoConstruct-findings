// from server: 47% by colin
// roc 2007-08 005fe020  unit: RBX::GameTool  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fe020
//
// 005fe020  6aff                 push -1
// 005fe022  6888ad7500           push 0x75ad88
// 005fe027  64a100000000         mov eax, dword ptr fs:[0]
// 005fe02d  50                   push eax
// 005fe02e  64892500000000       mov dword ptr fs:[0], esp
// 005fe035  51                   push ecx
// 005fe036  8b442414             mov eax, dword ptr [esp + 0x14]
// 005fe03a  56                   push esi
// 005fe03b  8bf1                 mov esi, ecx
// 005fe03d  50                   push eax
// 005fe03e  89742408             mov dword ptr [esp + 8], esi
// 005fe042  e8c95cfeff           call 0x5e3d10
// 005fe047  8d4e20               lea ecx, [esi + 0x20]
// 005fe04a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fe052  c706cc267c00         mov dword ptr [esi], 0x7c26cc
// 005fe058  c74604b4267c00       mov dword ptr [esi + 4], 0x7c26b4
// 005fe05f  ff15a4e67700         call dword ptr [0x77e6a4]
// 005fe065  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe069  8bc6                 mov eax, esi
// 005fe06b  5e                   pop esi
// 005fe06c  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe073  83c410               add esp, 0x10
// 005fe076  c20400               ret 4

struct MouseCommand {
    MouseCommand();
    virtual ~MouseCommand();
};

struct GameTool : MouseCommand {
    char cursor[0x20];
    GameTool(int);
};

GameTool::GameTool(int a) : MouseCommand()
{
    *(void**)this = (void*)0x7c26cc;
    *(void**)((char*)this + 4) = (void*)0x7c26b4;
    extern void __stdcall sub_5E3D10(int);
    sub_5E3D10(a);
    extern void __stdcall sub_77E6A4();
    sub_77E6A4();
}
