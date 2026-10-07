// roc 2007-08 006a39a0  unit: CXTPKeyboardManager  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a39a0
//
// 006a39a0  c70158357d00         mov dword ptr [ecx], 0x7d3558
// 006a39a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a39a9  85c9                 test ecx, ecx
// 006a39ab  7407                 je 0x6a39b4
// 006a39ad  51                   push ecx
// 006a39ae  e873c5f8ff           call 0x62ff26
// 006a39b3  59                   pop ecx
// 006a39b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a39a0(void*);
struct S_func_006a39a0 {
    virtual ~S_func_006a39a0();
    void* m_p;
};
S_func_006a39a0::~S_func_006a39a0()
{
    if (m_p)
        G1_func_006a39a0(m_p);
}
