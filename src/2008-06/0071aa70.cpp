// roc 2008-06 0071aa70  unit: CXTPDockBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071aa70
//
// 0071aa70  c7018cf18500         mov dword ptr [ecx], 0x85f18c
// 0071aa76  8b4904               mov ecx, dword ptr [ecx + 4]
// 0071aa79  85c9                 test ecx, ecx
// 0071aa7b  7407                 je 0x71aa84
// 0071aa7d  51                   push ecx
// 0071aa7e  e8c75ef8ff           call 0x6a094a
// 0071aa83  59                   pop ecx
// 0071aa84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0071aa70(void*);
struct S_func_0071aa70 {
    virtual ~S_func_0071aa70();
    void* m_p;
};
S_func_0071aa70::~S_func_0071aa70()
{
    if (m_p)
        G1_func_0071aa70(m_p);
}
