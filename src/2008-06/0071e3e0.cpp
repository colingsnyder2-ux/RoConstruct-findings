// roc 2008-06 0071e3e0  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071e3e0
//
// 0071e3e0  c70110f58500         mov dword ptr [ecx], 0x85f510
// 0071e3e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0071e3e9  85c9                 test ecx, ecx
// 0071e3eb  7407                 je 0x71e3f4
// 0071e3ed  51                   push ecx
// 0071e3ee  e85725f8ff           call 0x6a094a
// 0071e3f3  59                   pop ecx
// 0071e3f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0071e3e0(void*);
struct S_func_0071e3e0 {
    virtual ~S_func_0071e3e0();
    void* m_p;
};
S_func_0071e3e0::~S_func_0071e3e0()
{
    if (m_p)
        G1_func_0071e3e0(m_p);
}
