// roc 2011-06 0089ff40  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ff40
//
// 0089ff40  c701b01ead00         mov dword ptr [ecx], 0xad1eb0
// 0089ff46  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089ff49  85c9                 test ecx, ecx
// 0089ff4b  7407                 je 0x89ff54
// 0089ff4d  51                   push ecx
// 0089ff4e  e8b1a3f6ff           call 0x80a304
// 0089ff53  59                   pop ecx
// 0089ff54  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0089ff40(void*);
struct S_func_0089ff40 {
    virtual ~S_func_0089ff40();
    void* m_p;
};
S_func_0089ff40::~S_func_0089ff40()
{
    if (m_p)
        G1_func_0089ff40(m_p);
}
