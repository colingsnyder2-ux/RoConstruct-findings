// roc 2008-06 0075bf80  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075bf80
//
// 0075bf80  c701f05b8600         mov dword ptr [ecx], 0x865bf0
// 0075bf86  8b4904               mov ecx, dword ptr [ecx + 4]
// 0075bf89  85c9                 test ecx, ecx
// 0075bf8b  7407                 je 0x75bf94
// 0075bf8d  51                   push ecx
// 0075bf8e  e8b749f4ff           call 0x6a094a
// 0075bf93  59                   pop ecx
// 0075bf94  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0075bf80(void*);
struct S_func_0075bf80 {
    virtual ~S_func_0075bf80();
    void* m_p;
};
S_func_0075bf80::~S_func_0075bf80()
{
    if (m_p)
        G1_func_0075bf80(m_p);
}
