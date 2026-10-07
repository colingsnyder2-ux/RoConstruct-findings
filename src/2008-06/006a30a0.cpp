// roc 2008-06 006a30a0  unit: CRobloxControlColorSelector  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a30a0
//
// 006a30a0  c701d4038500         mov dword ptr [ecx], 0x8503d4
// 006a30a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a30a9  85c9                 test ecx, ecx
// 006a30ab  7407                 je 0x6a30b4
// 006a30ad  51                   push ecx
// 006a30ae  e897d8ffff           call 0x6a094a
// 006a30b3  59                   pop ecx
// 006a30b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a30a0(void*);
struct S_func_006a30a0 {
    virtual ~S_func_006a30a0();
    void* m_p;
};
S_func_006a30a0::~S_func_006a30a0()
{
    if (m_p)
        G1_func_006a30a0(m_p);
}
