// roc 2009-06 0078ede0  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ede0
//
// 0078ede0  c701eced8f00         mov dword ptr [ecx], 0x8fedec
// 0078ede6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0078ede9  85c9                 test ecx, ecx
// 0078edeb  7407                 je 0x78edf4
// 0078eded  51                   push ecx
// 0078edee  e8eb9ef8ff           call 0x718cde
// 0078edf3  59                   pop ecx
// 0078edf4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0078ede0(void*);
struct S_func_0078ede0 {
    virtual ~S_func_0078ede0();
    void* m_p;
};
S_func_0078ede0::~S_func_0078ede0()
{
    if (m_p)
        G1_func_0078ede0(m_p);
}
