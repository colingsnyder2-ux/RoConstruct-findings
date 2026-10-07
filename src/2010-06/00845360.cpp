// roc 2010-06 00845360  unit: CXTPDockBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00845360
//
// 00845360  c701607da600         mov dword ptr [ecx], 0xa67d60
// 00845366  8b4904               mov ecx, dword ptr [ecx + 4]
// 00845369  85c9                 test ecx, ecx
// 0084536b  7407                 je 0x845374
// 0084536d  51                   push ecx
// 0084536e  e8d328f6ff           call 0x7a7c46
// 00845373  59                   pop ecx
// 00845374  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00845360(void*);
struct S_func_00845360 {
    virtual ~S_func_00845360();
    void* m_p;
};
S_func_00845360::~S_func_00845360()
{
    if (m_p)
        G1_func_00845360(m_p);
}
