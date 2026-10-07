// roc 2011-06 008c0840  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c0840
//
// 008c0840  c701905dad00         mov dword ptr [ecx], 0xad5d90
// 008c0846  8b4904               mov ecx, dword ptr [ecx + 4]
// 008c0849  85c9                 test ecx, ecx
// 008c084b  7407                 je 0x8c0854
// 008c084d  51                   push ecx
// 008c084e  e8b19af4ff           call 0x80a304
// 008c0853  59                   pop ecx
// 008c0854  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008c0840(void*);
struct S_func_008c0840 {
    virtual ~S_func_008c0840();
    void* m_p;
};
S_func_008c0840::~S_func_008c0840()
{
    if (m_p)
        G1_func_008c0840(m_p);
}
