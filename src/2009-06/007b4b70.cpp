// roc 2009-06 007b4b70  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4b70
//
// 007b4b70  c701d42f9000         mov dword ptr [ecx], 0x902fd4
// 007b4b76  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b4b79  85c9                 test ecx, ecx
// 007b4b7b  7407                 je 0x7b4b84
// 007b4b7d  51                   push ecx
// 007b4b7e  e85b41f6ff           call 0x718cde
// 007b4b83  59                   pop ecx
// 007b4b84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007b4b70(void*);
struct S_func_007b4b70 {
    virtual ~S_func_007b4b70();
    void* m_p;
};
S_func_007b4b70::~S_func_007b4b70()
{
    if (m_p)
        G1_func_007b4b70(m_p);
}
