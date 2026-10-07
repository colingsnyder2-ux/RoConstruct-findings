// roc 2009-06 00780070  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780070
//
// 00780070  c7013cce8f00         mov dword ptr [ecx], 0x8fce3c
// 00780076  8b4904               mov ecx, dword ptr [ecx + 4]
// 00780079  85c9                 test ecx, ecx
// 0078007b  7407                 je 0x780084
// 0078007d  51                   push ecx
// 0078007e  e85b8cf9ff           call 0x718cde
// 00780083  59                   pop ecx
// 00780084  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00780070(void*);
struct S_func_00780070 {
    virtual ~S_func_00780070();
    void* m_p;
};
S_func_00780070::~S_func_00780070()
{
    if (m_p)
        G1_func_00780070(m_p);
}
