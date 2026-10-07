// roc 2011-06 008735d0  unit: CXTPToolTipContext::CStandardToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008735d0
//
// 008735d0  c701accbac00         mov dword ptr [ecx], 0xaccbac
// 008735d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008735d9  85c9                 test ecx, ecx
// 008735db  7407                 je 0x8735e4
// 008735dd  51                   push ecx
// 008735de  e8216df9ff           call 0x80a304
// 008735e3  59                   pop ecx
// 008735e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008735d0(void*);
struct S_func_008735d0 {
    virtual ~S_func_008735d0();
    void* m_p;
};
S_func_008735d0::~S_func_008735d0()
{
    if (m_p)
        G1_func_008735d0(m_p);
}
