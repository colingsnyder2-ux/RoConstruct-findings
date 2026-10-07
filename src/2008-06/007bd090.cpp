// roc 2008-06 007bd090  unit: CSpinButtonCtrl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007bd090
//
// 007bd090  a160c39600           mov eax, dword ptr [0x96c360]
// 007bd095  83e0fe               and eax, 0xfffffffe
// 007bd098  a360c39600           mov dword ptr [0x96c360], eax
// 007bd09d  c3                   ret 

extern unsigned int g_initFlags;

void ClearInitFlag()
{
    g_initFlags &= ~1u;
}
