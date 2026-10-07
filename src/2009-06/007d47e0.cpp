// roc 2009-06 007d47e0  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d47e0
//
// 007d47e0  c701286c9000         mov dword ptr [ecx], 0x906c28
// 007d47e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007d47e9  85c9                 test ecx, ecx
// 007d47eb  7407                 je 0x7d47f4
// 007d47ed  51                   push ecx
// 007d47ee  e8eb44f4ff           call 0x718cde
// 007d47f3  59                   pop ecx
// 007d47f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007d47e0(void*);
struct S_func_007d47e0 {
    virtual ~S_func_007d47e0();
    void* m_p;
};
S_func_007d47e0::~S_func_007d47e0()
{
    if (m_p)
        G1_func_007d47e0(m_p);
}
