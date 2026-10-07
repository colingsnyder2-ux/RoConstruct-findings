// roc 2010-06 0085f3d0  unit: CXTPDockingPaneAutoHidePanel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085f3d0
//
// 0085f3d0  c701c8a8a600         mov dword ptr [ecx], 0xa6a8c8
// 0085f3d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085f3d9  85c9                 test ecx, ecx
// 0085f3db  7407                 je 0x85f3e4
// 0085f3dd  51                   push ecx
// 0085f3de  e86388f4ff           call 0x7a7c46
// 0085f3e3  59                   pop ecx
// 0085f3e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0085f3d0(void*);
struct S_func_0085f3d0 {
    virtual ~S_func_0085f3d0();
    void* m_p;
};
S_func_0085f3d0::~S_func_0085f3d0()
{
    if (m_p)
        G1_func_0085f3d0(m_p);
}
