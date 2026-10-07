// roc 2008-06 00744210  unit: CXTPControlEditCtrl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00744210
//
// 00744210  c701343a8600         mov dword ptr [ecx], 0x863a34
// 00744216  8b4904               mov ecx, dword ptr [ecx + 4]
// 00744219  85c9                 test ecx, ecx
// 0074421b  7407                 je 0x744224
// 0074421d  51                   push ecx
// 0074421e  e827c7f5ff           call 0x6a094a
// 00744223  59                   pop ecx
// 00744224  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00744210(void*);
struct S_func_00744210 {
    virtual ~S_func_00744210();
    void* m_p;
};
S_func_00744210::~S_func_00744210()
{
    if (m_p)
        G1_func_00744210(m_p);
}
