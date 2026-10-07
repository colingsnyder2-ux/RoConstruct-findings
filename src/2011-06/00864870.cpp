// roc 2011-06 00864870  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00864870
//
// 00864870  c70174b1ac00         mov dword ptr [ecx], 0xacb174
// 00864876  8b4904               mov ecx, dword ptr [ecx + 4]
// 00864879  85c9                 test ecx, ecx
// 0086487b  7407                 je 0x864884
// 0086487d  51                   push ecx
// 0086487e  e8815afaff           call 0x80a304
// 00864883  59                   pop ecx
// 00864884  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00864870(void*);
struct S_func_00864870 {
    virtual ~S_func_00864870();
    void* m_p;
};
S_func_00864870::~S_func_00864870()
{
    if (m_p)
        G1_func_00864870(m_p);
}
