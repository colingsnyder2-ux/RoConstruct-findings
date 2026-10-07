// roc 2007-08 0068a140  unit: CXTPTabClientWnd  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a140
//
// 0068a140  c701e4fc7c00         mov dword ptr [ecx], 0x7cfce4
// 0068a146  8b4904               mov ecx, dword ptr [ecx + 4]
// 0068a149  85c9                 test ecx, ecx
// 0068a14b  7407                 je 0x68a154
// 0068a14d  51                   push ecx
// 0068a14e  e8d35dfaff           call 0x62ff26
// 0068a153  59                   pop ecx
// 0068a154  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0068a140(void*);
struct S_func_0068a140 {
    virtual ~S_func_0068a140();
    void* m_p;
};
S_func_0068a140::~S_func_0068a140()
{
    if (m_p)
        G1_func_0068a140(m_p);
}
