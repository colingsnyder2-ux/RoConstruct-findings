// from server: 32% by colin
// roc 2007-08 005fdfe0  unit: RBX::GameTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fdfe0
//
// 005fdfe0  267c00               jl 0x5fdfe3
// 005fdfe3  c74604b4267c00       mov dword ptr [esi + 4], 0x7c26b4
// 005fdfea  8d4e20               lea ecx, [esi + 0x20]
// 005fdfed  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fdff5  ff15ace67700         call dword ptr [0x77e6ac]
// 005fdffb  8bce                 mov ecx, esi
// 005fdffd  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fe005  e8465dfeff           call 0x5e3d50
// 005fe00a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fe00e  5e                   pop esi
// 005fe00f  64890d00000000       mov dword ptr fs:[0], ecx
// 005fe016  83c410               add esp, 0x10
// 005fe019  c3                   ret 

struct GameTool {
    char pad[0x20];
    void destroy();
};

extern "C" void __stdcall sub_5E3D50();
extern "C" void __stdcall sub_77E6AC();

void GameTool::destroy()
{
    *(int*)((char*)this + 4) = 0x7c26b4;
    sub_77E6AC();
    sub_5E3D50();
}
