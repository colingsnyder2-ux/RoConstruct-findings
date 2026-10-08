// from server: 48% by colin
// roc 2007-08 00404392  unit: ATL::CRegObject  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404392
//
// 00404392  b80e000780           mov eax, 0x8007000e
// 00404397  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040439a  64890d00000000       mov dword ptr fs:[0], ecx
// 004043a1  59                   pop ecx
// 004043a2  5f                   pop edi
// 004043a3  5e                   pop esi
// 004043a4  5b                   pop ebx
// 004043a5  8be5                 mov esp, ebp
// 004043a7  5d                   pop ebp
// 004043a8  c20c00               ret 0xc

struct CRegObject
{
    long Fail(int, int, int);
};

long CRegObject::Fail(int, int, int)
{
    return 0x8007000E;
}
