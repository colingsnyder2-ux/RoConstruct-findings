// from server: 22% by colin
// roc 2007-08 00594260  unit: RBX::FlatTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594260
//
// 00594260  6aff                 push -1
// 00594262  681bb67500           push 0x75b61b
// 00594267  64a100000000         mov eax, dword ptr fs:[0]
// 0059426d  50                   push eax
// 0059426e  64892500000000       mov dword ptr fs:[0], esp
// 00594275  51                   push ecx
// 00594276  56                   push esi
// 00594277  57                   push edi
// 00594278  6a4c                 push 0x4c
// 0059427a  8bf9                 mov edi, ecx
// 0059427c  e875bc0900           call 0x62fef6
// 00594281  8bf0                 mov esi, eax
// 00594283  83c404               add esp, 4
// 00594286  89742408             mov dword ptr [esp + 8], esi
// 0059428a  33c0                 xor eax, eax
// 0059428c  3bf0                 cmp esi, eax
// 0059428e  89442414             mov dword ptr [esp + 0x14], eax
// 00594292  741a                 je 0x5942ae
// 00594294  8b4718               mov eax, dword ptr [edi + 0x18]
// 00594297  50                   push eax
// 00594298  8bce                 mov ecx, esi
// 0059429a  e8d1710600           call 0x5fb470
// 0059429f  c7063c057b00         mov dword ptr [esi], 0x7b053c
// 005942a5  c7460420057b00       mov dword ptr [esi + 4], 0x7b0520
// 005942ac  8bc6                 mov eax, esi
// 005942ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005942b2  5f                   pop edi
// 005942b3  5e                   pop esi
// 005942b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005942bb  83c410               add esp, 0x10
// 005942be  c3                   ret 

struct Workspace;

struct MouseCommand {
    MouseCommand(Workspace* workspace);
};

struct SurfaceTool : MouseCommand {
    SurfaceTool(Workspace* workspace);
};

struct FlatTool : SurfaceTool {
    FlatTool(Workspace* workspace);
};

FlatTool::FlatTool(Workspace* workspace) : SurfaceTool(workspace)
{
}
