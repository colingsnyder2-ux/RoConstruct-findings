// roc 2008-06 0070bca0  unit: CXTPToolTipContext::CStandardToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070bca0
//
// 0070bca0  c701f4c58500         mov dword ptr [ecx], 0x85c5f4
// 0070bca6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0070bca9  85c9                 test ecx, ecx
// 0070bcab  7407                 je 0x70bcb4
// 0070bcad  51                   push ecx
// 0070bcae  e8974cf9ff           call 0x6a094a
// 0070bcb3  59                   pop ecx
// 0070bcb4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0070bca0(void*);
struct S_func_0070bca0 {
    virtual ~S_func_0070bca0();
    void* m_p;
};
S_func_0070bca0::~S_func_0070bca0()
{
    if (m_p)
        G1_func_0070bca0(m_p);
}
