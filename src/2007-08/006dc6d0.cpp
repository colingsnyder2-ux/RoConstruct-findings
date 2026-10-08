// roc 2007-08 006dc6d0  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc6d0
//
// 006dc6d0  c7013c947d00         mov dword ptr [ecx], 0x7d943c
// 006dc6d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006dc6d9  85c9                 test ecx, ecx
// 006dc6db  7407                 je 0x6dc6e4
// 006dc6dd  51                   push ecx
// 006dc6de  e84338f5ff           call 0x62ff26
// 006dc6e3  59                   pop ecx
// 006dc6e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006dc6d0(void*);
struct S_func_006dc6d0 {
    virtual ~S_func_006dc6d0();
    void* m_p;
};
S_func_006dc6d0::~S_func_006dc6d0()
{
    if (m_p)
        G1_func_006dc6d0(m_p);
}
