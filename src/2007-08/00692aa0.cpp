// roc 2007-08 00692aa0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00692aa0
//
// 00692aa0  c701a8097d00         mov dword ptr [ecx], 0x7d09a8
// 00692aa6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00692aa9  85c9                 test ecx, ecx
// 00692aab  7407                 je 0x692ab4
// 00692aad  51                   push ecx
// 00692aae  e873d4f9ff           call 0x62ff26
// 00692ab3  59                   pop ecx
// 00692ab4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00692aa0(void*);
struct S_func_00692aa0 {
    virtual ~S_func_00692aa0();
    void* m_p;
};
S_func_00692aa0::~S_func_00692aa0()
{
    if (m_p)
        G1_func_00692aa0(m_p);
}
