// roc 2011-06 0086c870  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086c870
//
// 0086c870  c7019cbeac00         mov dword ptr [ecx], 0xacbe9c
// 0086c876  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086c879  85c9                 test ecx, ecx
// 0086c87b  7407                 je 0x86c884
// 0086c87d  51                   push ecx
// 0086c87e  e881daf9ff           call 0x80a304
// 0086c883  59                   pop ecx
// 0086c884  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0086c870(void*);
struct S_func_0086c870 {
    virtual ~S_func_0086c870();
    void* m_p;
};
S_func_0086c870::~S_func_0086c870()
{
    if (m_p)
        G1_func_0086c870(m_p);
}
