// roc 2011-06 0089e890  unit: CXTPKeyboardManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089e890
//
// 0089e890  c701601ead00         mov dword ptr [ecx], 0xad1e60
// 0089e896  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089e899  85c9                 test ecx, ecx
// 0089e89b  7407                 je 0x89e8a4
// 0089e89d  51                   push ecx
// 0089e89e  e861baf6ff           call 0x80a304
// 0089e8a3  59                   pop ecx
// 0089e8a4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0089e890(void*);
struct S_func_0089e890 {
    virtual ~S_func_0089e890();
    void* m_p;
};
S_func_0089e890::~S_func_0089e890()
{
    if (m_p)
        G1_func_0089e890(m_p);
}
