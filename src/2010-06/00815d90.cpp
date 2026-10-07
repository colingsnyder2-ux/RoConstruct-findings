// roc 2010-06 00815d90  unit: CXTPToolTipContext::CStandardToolTip  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00815d90
//
// 00815d90  c701cc22a600         mov dword ptr [ecx], 0xa622cc
// 00815d96  8b4904               mov ecx, dword ptr [ecx + 4]
// 00815d99  85c9                 test ecx, ecx
// 00815d9b  7407                 je 0x815da4
// 00815d9d  51                   push ecx
// 00815d9e  e8a31ef9ff           call 0x7a7c46
// 00815da3  59                   pop ecx
// 00815da4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00815d90(void*);
struct S_func_00815d90 {
    virtual ~S_func_00815d90();
    void* m_p;
};
S_func_00815d90::~S_func_00815d90()
{
    if (m_p)
        G1_func_00815d90(m_p);
}
