// roc 2010-06 00842dc0  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842dc0
//
// 00842dc0  c701a874a600         mov dword ptr [ecx], 0xa674a8
// 00842dc6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00842dc9  85c9                 test ecx, ecx
// 00842dcb  7407                 je 0x842dd4
// 00842dcd  51                   push ecx
// 00842dce  e8734ef6ff           call 0x7a7c46
// 00842dd3  59                   pop ecx
// 00842dd4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00842dc0(void*);
struct S_func_00842dc0 {
    virtual ~S_func_00842dc0();
    void* m_p;
};
S_func_00842dc0::~S_func_00842dc0()
{
    if (m_p)
        G1_func_00842dc0(m_p);
}
