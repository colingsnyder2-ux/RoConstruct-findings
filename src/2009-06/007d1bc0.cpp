// roc 2009-06 007d1bc0  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d1bc0
//
// 007d1bc0  c701bc669000         mov dword ptr [ecx], 0x9066bc
// 007d1bc6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007d1bc9  85c9                 test ecx, ecx
// 007d1bcb  7407                 je 0x7d1bd4
// 007d1bcd  51                   push ecx
// 007d1bce  e80b71f4ff           call 0x718cde
// 007d1bd3  59                   pop ecx
// 007d1bd4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007d1bc0(void*);
struct S_func_007d1bc0 {
    virtual ~S_func_007d1bc0();
    void* m_p;
};
S_func_007d1bc0::~S_func_007d1bc0()
{
    if (m_p)
        G1_func_007d1bc0(m_p);
}
