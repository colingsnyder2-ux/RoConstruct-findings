// roc 2008-06 0071e3a0  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071e3a0
//
// 0071e3a0  c701f8f48500         mov dword ptr [ecx], 0x85f4f8
// 0071e3a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0071e3a9  85c9                 test ecx, ecx
// 0071e3ab  7407                 je 0x71e3b4
// 0071e3ad  51                   push ecx
// 0071e3ae  e89725f8ff           call 0x6a094a
// 0071e3b3  59                   pop ecx
// 0071e3b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0071e3a0(void*);
struct S_func_0071e3a0 {
    virtual ~S_func_0071e3a0();
    void* m_p;
};
S_func_0071e3a0::~S_func_0071e3a0()
{
    if (m_p)
        G1_func_0071e3a0(m_p);
}
