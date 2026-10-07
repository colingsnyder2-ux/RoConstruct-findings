// roc 2009-06 007d04c0  unit: CXTPDockingPaneAutoHidePanel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d04c0
//
// 007d04c0  c70170619000         mov dword ptr [ecx], 0x906170
// 007d04c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007d04c9  85c9                 test ecx, ecx
// 007d04cb  7407                 je 0x7d04d4
// 007d04cd  51                   push ecx
// 007d04ce  e80b88f4ff           call 0x718cde
// 007d04d3  59                   pop ecx
// 007d04d4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007d04c0(void*);
struct S_func_007d04c0 {
    virtual ~S_func_007d04c0();
    void* m_p;
};
S_func_007d04c0::~S_func_007d04c0()
{
    if (m_p)
        G1_func_007d04c0(m_p);
}
