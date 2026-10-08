// roc 2007-08 006df120  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006df120
//
// 006df120  c70150997d00         mov dword ptr [ecx], 0x7d9950
// 006df126  8b4904               mov ecx, dword ptr [ecx + 4]
// 006df129  85c9                 test ecx, ecx
// 006df12b  7407                 je 0x6df134
// 006df12d  51                   push ecx
// 006df12e  e8f30df5ff           call 0x62ff26
// 006df133  59                   pop ecx
// 006df134  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006df120(void*);
struct S_func_006df120 {
    virtual ~S_func_006df120();
    void* m_p;
};
S_func_006df120::~S_func_006df120()
{
    if (m_p)
        G1_func_006df120(m_p);
}
