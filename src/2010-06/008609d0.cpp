// roc 2010-06 008609d0  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008609d0
//
// 008609d0  c7012caea600         mov dword ptr [ecx], 0xa6ae2c
// 008609d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008609d9  85c9                 test ecx, ecx
// 008609db  7407                 je 0x8609e4
// 008609dd  51                   push ecx
// 008609de  e86372f4ff           call 0x7a7c46
// 008609e3  59                   pop ecx
// 008609e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008609d0(void*);
struct S_func_008609d0 {
    virtual ~S_func_008609d0();
    void* m_p;
};
S_func_008609d0::~S_func_008609d0()
{
    if (m_p)
        G1_func_008609d0(m_p);
}
