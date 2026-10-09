// from server: 45% by colin
// roc 2007-08 00594910  unit: RBX::HingeTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594910
//
// 00594910  6aff                 push -1
// 00594912  681bb67500           push 0x75b61b
// 00594917  64a100000000         mov eax, dword ptr fs:[0]
// 0059491d  50                   push eax
// 0059491e  64892500000000       mov dword ptr fs:[0], esp
// 00594925  51                   push ecx
// 00594926  56                   push esi
// 00594927  57                   push edi
// 00594928  6a4c                 push 0x4c
// 0059492a  8bf9                 mov edi, ecx
// 0059492c  e8c5b50900           call 0x62fef6
// 00594931  8bf0                 mov esi, eax
// 00594933  83c404               add esp, 4
// 00594936  89742408             mov dword ptr [esp + 8], esi
// 0059493a  33c0                 xor eax, eax
// 0059493c  3bf0                 cmp esi, eax
// 0059493e  89442414             mov dword ptr [esp + 0x14], eax
// 00594942  741a                 je 0x59495e
// 00594944  8b4718               mov eax, dword ptr [edi + 0x18]
// 00594947  50                   push eax
// 00594948  8bce                 mov ecx, esi
// 0059494a  e8216b0600           call 0x5fb470
// 0059494f  c706e4077b00         mov dword ptr [esi], 0x7b07e4
// 00594955  c74604c8077b00       mov dword ptr [esi + 4], 0x7b07c8
// 0059495c  8bc6                 mov eax, esi
// 0059495e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594962  5f                   pop edi
// 00594963  5e                   pop esi
// 00594964  64890d00000000       mov dword ptr fs:[0], ecx
// 0059496b  83c410               add esp, 0x10
// 0059496e  c3                   ret 

struct Workspace;

struct SurfaceTool {
    SurfaceTool(Workspace*);
};

struct HingeTool : SurfaceTool {
    HingeTool(Workspace*);
};

extern "C" void* __cdecl operator_new(unsigned int);

void __fastcall sub_005fb470(void*, int, int);
void* __fastcall sub_0062fef6(void*, int, int);

HingeTool::HingeTool(Workspace* workspace)
    : SurfaceTool(workspace)
{
    void* mem = operator_new(0x4c);
    if (mem != 0) {
        sub_005fb470(mem, 0, *(int*)((char*)this + 0x18));
        *(void**)mem = (void*)0x7b07e4;
        *(void**)((char*)mem + 4) = (void*)0x7b07c8;
    }
}
