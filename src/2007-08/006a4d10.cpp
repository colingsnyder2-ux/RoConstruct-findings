// roc 2007-08 006a4d10  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4d10
//
// 006a4d10  c70128367d00         mov dword ptr [ecx], 0x7d3628
// 006a4d16  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a4d19  85c9                 test ecx, ecx
// 006a4d1b  7407                 je 0x6a4d24
// 006a4d1d  51                   push ecx
// 006a4d1e  e803b2f8ff           call 0x62ff26
// 006a4d23  59                   pop ecx
// 006a4d24  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a4d10(void*);
struct S_func_006a4d10 {
    virtual ~S_func_006a4d10();
    void* m_p;
};
S_func_006a4d10::~S_func_006a4d10()
{
    if (m_p)
        G1_func_006a4d10(m_p);
}
