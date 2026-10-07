// roc 2011-06 0089e8d0  unit: CXTPKeyboardManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e8d0
//
// 0089e8d0  c701781ead00         mov dword ptr [ecx], 0xad1e78
// 0089e8d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089e8d9  85c9                 test ecx, ecx
// 0089e8db  7407                 je 0x89e8e4
// 0089e8dd  51                   push ecx
// 0089e8de  e821baf6ff           call 0x80a304
// 0089e8e3  59                   pop ecx
// 0089e8e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0089e8d0(void*);
struct S_func_0089e8d0 {
    virtual ~S_func_0089e8d0();
    void* m_p;
};
S_func_0089e8d0::~S_func_0089e8d0()
{
    if (m_p)
        G1_func_0089e8d0(m_p);
}
