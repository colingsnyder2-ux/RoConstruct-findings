// roc 2010-06 008857e0  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008857e0
//
// 008857e0  c7012ceea600         mov dword ptr [ecx], 0xa6ee2c
// 008857e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008857e9  85c9                 test ecx, ecx
// 008857eb  7407                 je 0x8857f4
// 008857ed  51                   push ecx
// 008857ee  e85324f2ff           call 0x7a7c46
// 008857f3  59                   pop ecx
// 008857f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008857e0(void*);
struct S_func_008857e0 {
    virtual ~S_func_008857e0();
    void* m_p;
};
S_func_008857e0::~S_func_008857e0()
{
    if (m_p)
        G1_func_008857e0(m_p);
}
