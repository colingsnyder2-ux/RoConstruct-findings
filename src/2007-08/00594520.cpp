// from server: 22% by colin
// roc 2007-08 00594520  unit: RBX::WeldTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594520
//
// 00594520  6aff                 push -1
// 00594522  681bb67500           push 0x75b61b
// 00594527  64a100000000         mov eax, dword ptr fs:[0]
// 0059452d  50                   push eax
// 0059452e  64892500000000       mov dword ptr fs:[0], esp
// 00594535  51                   push ecx
// 00594536  56                   push esi
// 00594537  57                   push edi
// 00594538  6a4c                 push 0x4c
// 0059453a  8bf9                 mov edi, ecx
// 0059453c  e8b5b90900           call 0x62fef6
// 00594541  8bf0                 mov esi, eax
// 00594543  83c404               add esp, 4
// 00594546  89742408             mov dword ptr [esp + 8], esi
// 0059454a  33c0                 xor eax, eax
// 0059454c  3bf0                 cmp esi, eax
// 0059454e  89442414             mov dword ptr [esp + 0x14], eax
// 00594552  741a                 je 0x59456e
// 00594554  8b4718               mov eax, dword ptr [edi + 0x18]
// 00594557  50                   push eax
// 00594558  8bce                 mov ecx, esi
// 0059455a  e8116f0600           call 0x5fb470
// 0059455f  c7064c067b00         mov dword ptr [esi], 0x7b064c
// 00594565  c7460430067b00       mov dword ptr [esi + 4], 0x7b0630
// 0059456c  8bc6                 mov eax, esi
// 0059456e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594572  5f                   pop edi
// 00594573  5e                   pop esi
// 00594574  64890d00000000       mov dword ptr fs:[0], ecx
// 0059457b  83c410               add esp, 0x10
// 0059457e  c3                   ret 

struct Workspace;

struct MouseCommand {
    MouseCommand(Workspace*);
};

struct SurfaceTool : MouseCommand {
    SurfaceTool(Workspace*);
};

struct WeldTool : SurfaceTool {
    WeldTool(Workspace*);
};

WeldTool::WeldTool(Workspace* workspace)
    : SurfaceTool(workspace)
{
}
