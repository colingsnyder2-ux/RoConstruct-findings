// roc 2007-08 0069cd10  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069cd10
//
// 0069cd10  c701041f7d00         mov dword ptr [ecx], 0x7d1f04
// 0069cd16  8b4904               mov ecx, dword ptr [ecx + 4]
// 0069cd19  85c9                 test ecx, ecx
// 0069cd1b  7407                 je 0x69cd24
// 0069cd1d  51                   push ecx
// 0069cd1e  e80332f9ff           call 0x62ff26
// 0069cd23  59                   pop ecx
// 0069cd24  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0069cd10(void*);
struct S_func_0069cd10 {
    virtual ~S_func_0069cd10();
    void* m_p;
};
S_func_0069cd10::~S_func_0069cd10()
{
    if (m_p)
        G1_func_0069cd10(m_p);
}
