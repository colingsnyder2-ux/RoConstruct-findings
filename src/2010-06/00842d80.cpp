// roc 2010-06 00842d80  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842d80
//
// 00842d80  c7019074a600         mov dword ptr [ecx], 0xa67490
// 00842d86  8b4904               mov ecx, dword ptr [ecx + 4]
// 00842d89  85c9                 test ecx, ecx
// 00842d8b  7407                 je 0x842d94
// 00842d8d  51                   push ecx
// 00842d8e  e8b34ef6ff           call 0x7a7c46
// 00842d93  59                   pop ecx
// 00842d94  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00842d80(void*);
struct S_func_00842d80 {
    virtual ~S_func_00842d80();
    void* m_p;
};
S_func_00842d80::~S_func_00842d80()
{
    if (m_p)
        G1_func_00842d80(m_p);
}
