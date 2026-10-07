// roc 2010-06 007c8870  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8870
//
// 007c8870  c7018480a500         mov dword ptr [ecx], 0xa58084
// 007c8876  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c8879  85c9                 test ecx, ecx
// 007c887b  7407                 je 0x7c8884
// 007c887d  51                   push ecx
// 007c887e  e8c3f3fdff           call 0x7a7c46
// 007c8883  59                   pop ecx
// 007c8884  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007c8870(void*);
struct S_func_007c8870 {
    virtual ~S_func_007c8870();
    void* m_p;
};
S_func_007c8870::~S_func_007c8870()
{
    if (m_p)
        G1_func_007c8870(m_p);
}
