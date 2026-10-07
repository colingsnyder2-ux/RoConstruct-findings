// roc 2009-06 007d1c20  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d1c20
//
// 007d1c20  c701d4669000         mov dword ptr [ecx], 0x9066d4
// 007d1c26  8b4904               mov ecx, dword ptr [ecx + 4]
// 007d1c29  85c9                 test ecx, ecx
// 007d1c2b  7407                 je 0x7d1c34
// 007d1c2d  51                   push ecx
// 007d1c2e  e8ab70f4ff           call 0x718cde
// 007d1c33  59                   pop ecx
// 007d1c34  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007d1c20(void*);
struct S_func_007d1c20 {
    virtual ~S_func_007d1c20();
    void* m_p;
};
S_func_007d1c20::~S_func_007d1c20()
{
    if (m_p)
        G1_func_007d1c20(m_p);
}
