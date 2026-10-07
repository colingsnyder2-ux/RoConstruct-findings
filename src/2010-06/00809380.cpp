// roc 2010-06 00809380  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00809380
//
// 00809380  c701d40ea600         mov dword ptr [ecx], 0xa60ed4
// 00809386  8b4904               mov ecx, dword ptr [ecx + 4]
// 00809389  85c9                 test ecx, ecx
// 0080938b  7407                 je 0x809394
// 0080938d  51                   push ecx
// 0080938e  e8b3e8f9ff           call 0x7a7c46
// 00809393  59                   pop ecx
// 00809394  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00809380(void*);
struct S_func_00809380 {
    virtual ~S_func_00809380();
    void* m_p;
};
S_func_00809380::~S_func_00809380()
{
    if (m_p)
        G1_func_00809380(m_p);
}
