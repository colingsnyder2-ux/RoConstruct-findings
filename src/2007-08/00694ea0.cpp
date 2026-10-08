// roc 2007-08 00694ea0  unit: CXTPToolTipContext::CStandardToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694ea0
//
// 00694ea0  c701ac0e7d00         mov dword ptr [ecx], 0x7d0eac
// 00694ea6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00694ea9  85c9                 test ecx, ecx
// 00694eab  7407                 je 0x694eb4
// 00694ead  51                   push ecx
// 00694eae  e873b0f9ff           call 0x62ff26
// 00694eb3  59                   pop ecx
// 00694eb4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00694ea0(void*);
struct S_func_00694ea0 {
    virtual ~S_func_00694ea0();
    void* m_p;
};
S_func_00694ea0::~S_func_00694ea0()
{
    if (m_p)
        G1_func_00694ea0(m_p);
}
