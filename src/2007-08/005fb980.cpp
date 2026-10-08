// from server: 80% by colin
// roc 2007-08 005fb980  unit: RBX::LockTool  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb980
//
// 005fb980  8b442404             mov eax, dword ptr [esp + 4]
// 005fb984  56                   push esi
// 005fb985  50                   push eax
// 005fb986  8bf1                 mov esi, ecx
// 005fb988  e88383feff           call 0x5e3d10
// 005fb98d  33c0                 xor eax, eax
// 005fb98f  c70684247c00         mov dword ptr [esi], 0x7c2484
// 005fb995  c7460468247c00       mov dword ptr [esi + 4], 0x7c2468
// 005fb99c  894620               mov dword ptr [esi + 0x20], eax
// 005fb99f  894624               mov dword ptr [esi + 0x24], eax
// 005fb9a2  8bc6                 mov eax, esi
// 005fb9a4  5e                   pop esi
// 005fb9a5  c20400               ret 4

struct ModelTool {
    char pad[0x28];
};

struct LockTool : ModelTool {
    LockTool(ModelTool* workspace);
};

extern "C" void __stdcall sub_5e3d10(ModelTool* workspace);

LockTool::LockTool(ModelTool* workspace)
{
    sub_5e3d10(workspace);
    *(int*)((char*)this + 0x00) = 0x7c2484;
    *(int*)((char*)this + 0x04) = 0x7c2468;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
}
