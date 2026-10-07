// roc 2007-08 006992c0  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006992c0
//
// 006992c0  c70180167d00         mov dword ptr [ecx], 0x7d1680
// 006992c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006992c9  85c9                 test ecx, ecx
// 006992cb  7407                 je 0x6992d4
// 006992cd  51                   push ecx
// 006992ce  e8536cf9ff           call 0x62ff26
// 006992d3  59                   pop ecx
// 006992d4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006992c0(void*);
struct S_func_006992c0 {
    virtual ~S_func_006992c0();
    void* m_p;
};
S_func_006992c0::~S_func_006992c0()
{
    if (m_p)
        G1_func_006992c0(m_p);
}
