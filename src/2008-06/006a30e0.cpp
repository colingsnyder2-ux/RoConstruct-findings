// roc 2008-06 006a30e0  unit: CRobloxControlColorSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a30e0
//
// 006a30e0  c701ec038500         mov dword ptr [ecx], 0x8503ec
// 006a30e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a30e9  85c9                 test ecx, ecx
// 006a30eb  7407                 je 0x6a30f4
// 006a30ed  51                   push ecx
// 006a30ee  e857d8ffff           call 0x6a094a
// 006a30f3  59                   pop ecx
// 006a30f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a30e0(void*);
struct S_func_006a30e0 {
    virtual ~S_func_006a30e0();
    void* m_p;
};
S_func_006a30e0::~S_func_006a30e0()
{
    if (m_p)
        G1_func_006a30e0(m_p);
}
