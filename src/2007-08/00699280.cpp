// roc 2007-08 00699280  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699280
//
// 00699280  c70168167d00         mov dword ptr [ecx], 0x7d1668
// 00699286  8b4904               mov ecx, dword ptr [ecx + 4]
// 00699289  85c9                 test ecx, ecx
// 0069928b  7407                 je 0x699294
// 0069928d  51                   push ecx
// 0069928e  e8936cf9ff           call 0x62ff26
// 00699293  59                   pop ecx
// 00699294  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00699280(void*);
struct S_func_00699280 {
    virtual ~S_func_00699280();
    void* m_p;
};
S_func_00699280::~S_func_00699280()
{
    if (m_p)
        G1_func_00699280(m_p);
}
