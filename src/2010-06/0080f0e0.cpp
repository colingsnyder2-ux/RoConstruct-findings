// roc 2010-06 0080f0e0  unit: CXTPStatusBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f0e0
//
// 0080f0e0  c701bc15a600         mov dword ptr [ecx], 0xa615bc
// 0080f0e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080f0e9  85c9                 test ecx, ecx
// 0080f0eb  7407                 je 0x80f0f4
// 0080f0ed  51                   push ecx
// 0080f0ee  e8538bf9ff           call 0x7a7c46
// 0080f0f3  59                   pop ecx
// 0080f0f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080f0e0(void*);
struct S_func_0080f0e0 {
    virtual ~S_func_0080f0e0();
    void* m_p;
};
S_func_0080f0e0::~S_func_0080f0e0()
{
    if (m_p)
        G1_func_0080f0e0(m_p);
}
