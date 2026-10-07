// roc 2008-06 00757ee0  unit: CXTPDockingPaneAutoHidePanel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757ee0
//
// 00757ee0  c70138518600         mov dword ptr [ecx], 0x865138
// 00757ee6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00757ee9  85c9                 test ecx, ecx
// 00757eeb  7407                 je 0x757ef4
// 00757eed  51                   push ecx
// 00757eee  e8578af4ff           call 0x6a094a
// 00757ef3  59                   pop ecx
// 00757ef4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00757ee0(void*);
struct S_func_00757ee0 {
    virtual ~S_func_00757ee0();
    void* m_p;
};
S_func_00757ee0::~S_func_00757ee0()
{
    if (m_p)
        G1_func_00757ee0(m_p);
}
