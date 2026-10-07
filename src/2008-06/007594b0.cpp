// roc 2008-06 007594b0  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007594b0
//
// 007594b0  c7019c568600         mov dword ptr [ecx], 0x86569c
// 007594b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007594b9  85c9                 test ecx, ecx
// 007594bb  7407                 je 0x7594c4
// 007594bd  51                   push ecx
// 007594be  e88774f4ff           call 0x6a094a
// 007594c3  59                   pop ecx
// 007594c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007594b0(void*);
struct S_func_007594b0 {
    virtual ~S_func_007594b0();
    void* m_p;
};
S_func_007594b0::~S_func_007594b0()
{
    if (m_p)
        G1_func_007594b0(m_p);
}
