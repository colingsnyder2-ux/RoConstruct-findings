// roc 2010-06 00819e80  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819e80
//
// 00819e80  c701b82ca600         mov dword ptr [ecx], 0xa62cb8
// 00819e86  8b4904               mov ecx, dword ptr [ecx + 4]
// 00819e89  85c9                 test ecx, ecx
// 00819e8b  7407                 je 0x819e94
// 00819e8d  51                   push ecx
// 00819e8e  e8b3ddf8ff           call 0x7a7c46
// 00819e93  59                   pop ecx
// 00819e94  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00819e80(void*);
struct S_func_00819e80 {
    virtual ~S_func_00819e80();
    void* m_p;
};
S_func_00819e80::~S_func_00819e80()
{
    if (m_p)
        G1_func_00819e80(m_p);
}
