// from server: 40% by colin
// roc 2007-08 005943d0  unit: RBX::GlueTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005943d0
//
// 005943d0  6aff                 push -1
// 005943d2  681bb67500           push 0x75b61b
// 005943d7  64a100000000         mov eax, dword ptr fs:[0]
// 005943dd  50                   push eax
// 005943de  64892500000000       mov dword ptr fs:[0], esp
// 005943e5  51                   push ecx
// 005943e6  56                   push esi
// 005943e7  57                   push edi
// 005943e8  6a4c                 push 0x4c
// 005943ea  8bf9                 mov edi, ecx
// 005943ec  e805bb0900           call 0x62fef6
// 005943f1  8bf0                 mov esi, eax
// 005943f3  83c404               add esp, 4
// 005943f6  89742408             mov dword ptr [esp + 8], esi
// 005943fa  33c0                 xor eax, eax
// 005943fc  3bf0                 cmp esi, eax
// 005943fe  89442414             mov dword ptr [esp + 0x14], eax
// 00594402  741a                 je 0x59441e
// 00594404  8b4718               mov eax, dword ptr [edi + 0x18]
// 00594407  50                   push eax
// 00594408  8bce                 mov ecx, esi
// 0059440a  e861700600           call 0x5fb470
// 0059440f  c706c4057b00         mov dword ptr [esi], 0x7b05c4
// 00594415  c74604a8057b00       mov dword ptr [esi + 4], 0x7b05a8
// 0059441c  8bc6                 mov eax, esi
// 0059441e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594422  5f                   pop edi
// 00594423  5e                   pop esi
// 00594424  64890d00000000       mov dword ptr fs:[0], ecx
// 0059442b  83c410               add esp, 0x10
// 0059442e  c3                   ret 

struct Workspace;

struct MouseCommand {
    MouseCommand(Workspace*);
};

struct SurfaceTool : MouseCommand {
    SurfaceTool(Workspace*);
};

struct GlueTool : SurfaceTool {
    GlueTool(Workspace*);
};

extern "C" void* __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_005fb470();

GlueTool::GlueTool(Workspace* workspace) : SurfaceTool(workspace)
{
    void* p = func_0062fef6(0x4c);
    if (p) {
        func_005fb470();
        *(void**)p = (void*)0x7b05c4;
        *(void**)((char*)p + 4) = (void*)0x7b05a8;
    }
}
