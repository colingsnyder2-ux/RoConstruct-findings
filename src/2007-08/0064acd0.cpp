// roc 2007-08 0064acd0  unit: CXTPCommandBar  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0064acd0
//
// 0064acd0  c701886c7c00         mov dword ptr [ecx], 0x7c6c88
// 0064acd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0064acd9  85c9                 test ecx, ecx
// 0064acdb  7407                 je 0x64ace4
// 0064acdd  51                   push ecx
// 0064acde  e84352feff           call 0x62ff26
// 0064ace3  59                   pop ecx
// 0064ace4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0064acd0(void*);
struct S_func_0064acd0 {
    virtual ~S_func_0064acd0();
    void* m_p;
};
S_func_0064acd0::~S_func_0064acd0()
{
    if (m_p)
        G1_func_0064acd0(m_p);
}
