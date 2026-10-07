// roc 2010-06 0087bad0  unit: VCEdit::?$CXTMaskEditT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087bad0
//
// 0087bad0  c70190e1a600         mov dword ptr [ecx], 0xa6e190
// 0087bad6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087bad9  85c9                 test ecx, ecx
// 0087badb  7407                 je 0x87bae4
// 0087badd  51                   push ecx
// 0087bade  e863c1f2ff           call 0x7a7c46
// 0087bae3  59                   pop ecx
// 0087bae4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0087bad0(void*);
struct S_func_0087bad0 {
    virtual ~S_func_0087bad0();
    void* m_p;
};
S_func_0087bad0::~S_func_0087bad0()
{
    if (m_p)
        G1_func_0087bad0(m_p);
}
