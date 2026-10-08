// roc 2007-08 00716ef0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716ef0
//
// 00716ef0  c70104f37d00         mov dword ptr [ecx], 0x7df304
// 00716ef6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00716ef9  85c9                 test ecx, ecx
// 00716efb  7407                 je 0x716f04
// 00716efd  51                   push ecx
// 00716efe  e82390f1ff           call 0x62ff26
// 00716f03  59                   pop ecx
// 00716f04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00716ef0(void*);
struct S_func_00716ef0 {
    virtual ~S_func_00716ef0();
    void* m_p;
};
S_func_00716ef0::~S_func_00716ef0()
{
    if (m_p)
        G1_func_00716ef0(m_p);
}
