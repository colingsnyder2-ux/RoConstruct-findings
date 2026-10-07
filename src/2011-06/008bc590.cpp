// roc 2011-06 008bc590  unit: CXTPDockingPaneAutoHidePanel  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc590
//
// 008bc590  c701e052ad00         mov dword ptr [ecx], 0xad52e0
// 008bc596  8b4904               mov ecx, dword ptr [ecx + 4]
// 008bc599  85c9                 test ecx, ecx
// 008bc59b  7407                 je 0x8bc5a4
// 008bc59d  51                   push ecx
// 008bc59e  e861ddf4ff           call 0x80a304
// 008bc5a3  59                   pop ecx
// 008bc5a4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008bc590(void*);
struct S_func_008bc590 {
    virtual ~S_func_008bc590();
    void* m_p;
};
S_func_008bc590::~S_func_008bc590()
{
    if (m_p)
        G1_func_008bc590(m_p);
}
