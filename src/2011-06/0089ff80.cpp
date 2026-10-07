// roc 2011-06 0089ff80  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089ff80
//
// 0089ff80  c701c81ead00         mov dword ptr [ecx], 0xad1ec8
// 0089ff86  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089ff89  85c9                 test ecx, ecx
// 0089ff8b  7407                 je 0x89ff94
// 0089ff8d  51                   push ecx
// 0089ff8e  e871a3f6ff           call 0x80a304
// 0089ff93  59                   pop ecx
// 0089ff94  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0089ff80(void*);
struct S_func_0089ff80 {
    virtual ~S_func_0089ff80();
    void* m_p;
};
S_func_0089ff80::~S_func_0089ff80()
{
    if (m_p)
        G1_func_0089ff80(m_p);
}
