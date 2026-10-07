// roc 2011-06 00878310  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878310
//
// 00878310  c701c4d9ac00         mov dword ptr [ecx], 0xacd9c4
// 00878316  8b4904               mov ecx, dword ptr [ecx + 4]
// 00878319  85c9                 test ecx, ecx
// 0087831b  7407                 je 0x878324
// 0087831d  51                   push ecx
// 0087831e  e8e11ff9ff           call 0x80a304
// 00878323  59                   pop ecx
// 00878324  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00878310(void*);
struct S_func_00878310 {
    virtual ~S_func_00878310();
    void* m_p;
};
S_func_00878310::~S_func_00878310()
{
    if (m_p)
        G1_func_00878310(m_p);
}
