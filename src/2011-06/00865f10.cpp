// roc 2011-06 00865f10  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865f10
//
// 00865f10  c701bcb1ac00         mov dword ptr [ecx], 0xacb1bc
// 00865f16  8b4904               mov ecx, dword ptr [ecx + 4]
// 00865f19  85c9                 test ecx, ecx
// 00865f1b  7407                 je 0x865f24
// 00865f1d  51                   push ecx
// 00865f1e  e8e143faff           call 0x80a304
// 00865f23  59                   pop ecx
// 00865f24  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00865f10(void*);
struct S_func_00865f10 {
    virtual ~S_func_00865f10();
    void* m_p;
};
S_func_00865f10::~S_func_00865f10()
{
    if (m_p)
        G1_func_00865f10(m_p);
}
