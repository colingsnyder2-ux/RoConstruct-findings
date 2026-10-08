// roc 2007-08 007008c0  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007008c0
//
// 007008c0  c7014cd27d00         mov dword ptr [ecx], 0x7dd24c
// 007008c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007008c9  85c9                 test ecx, ecx
// 007008cb  7407                 je 0x7008d4
// 007008cd  51                   push ecx
// 007008ce  e853f6f2ff           call 0x62ff26
// 007008d3  59                   pop ecx
// 007008d4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007008c0(void*);
struct S_func_007008c0 {
    virtual ~S_func_007008c0();
    void* m_p;
};
S_func_007008c0::~S_func_007008c0()
{
    if (m_p)
        G1_func_007008c0(m_p);
}
