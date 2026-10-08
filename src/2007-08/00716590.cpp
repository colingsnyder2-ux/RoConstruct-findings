// roc 2007-08 00716590  unit: CXTPRibbonTab  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00716590
//
// 00716590  c701ecf27d00         mov dword ptr [ecx], 0x7df2ec
// 00716596  8b4904               mov ecx, dword ptr [ecx + 4]
// 00716599  85c9                 test ecx, ecx
// 0071659b  7407                 je 0x7165a4
// 0071659d  51                   push ecx
// 0071659e  e88399f1ff           call 0x62ff26
// 007165a3  59                   pop ecx
// 007165a4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00716590(void*);
struct S_func_00716590 {
    virtual ~S_func_00716590();
    void* m_p;
};
S_func_00716590::~S_func_00716590()
{
    if (m_p)
        G1_func_00716590(m_p);
}
