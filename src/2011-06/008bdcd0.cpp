// roc 2011-06 008bdcd0  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bdcd0
//
// 008bdcd0  c7013c58ad00         mov dword ptr [ecx], 0xad583c
// 008bdcd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008bdcd9  85c9                 test ecx, ecx
// 008bdcdb  7407                 je 0x8bdce4
// 008bdcdd  51                   push ecx
// 008bdcde  e821c6f4ff           call 0x80a304
// 008bdce3  59                   pop ecx
// 008bdce4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008bdcd0(void*);
struct S_func_008bdcd0 {
    virtual ~S_func_008bdcd0();
    void* m_p;
};
S_func_008bdcd0::~S_func_008bdcd0()
{
    if (m_p)
        G1_func_008bdcd0(m_p);
}
