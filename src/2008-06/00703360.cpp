// roc 2008-06 00703360  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703360
//
// 00703360  c7014cb78500         mov dword ptr [ecx], 0x85b74c
// 00703366  8b4904               mov ecx, dword ptr [ecx + 4]
// 00703369  85c9                 test ecx, ecx
// 0070336b  7407                 je 0x703374
// 0070336d  51                   push ecx
// 0070336e  e8d7d5f9ff           call 0x6a094a
// 00703373  59                   pop ecx
// 00703374  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00703360(void*);
struct S_func_00703360 {
    virtual ~S_func_00703360();
    void* m_p;
};
S_func_00703360::~S_func_00703360()
{
    if (m_p)
        G1_func_00703360(m_p);
}
