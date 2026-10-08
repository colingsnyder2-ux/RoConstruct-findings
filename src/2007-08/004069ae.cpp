// from server: 48% by colin
// roc 2007-08 004069ae  unit: VCWorkspace::?$CComObject  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004069ae
//
// 004069ae  b80e000780           mov eax, 0x8007000e
// 004069b3  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004069b6  64890d00000000       mov dword ptr fs:[0], ecx
// 004069bd  59                   pop ecx
// 004069be  5f                   pop edi
// 004069bf  5e                   pop esi
// 004069c0  5b                   pop ebx
// 004069c1  8be5                 mov esp, ebp
// 004069c3  5d                   pop ebp
// 004069c4  c20800               ret 8

struct VCWorkspace
{
    int f(int, int);
};

int VCWorkspace::f(int, int)
{
    return 0x8007000e;
}
