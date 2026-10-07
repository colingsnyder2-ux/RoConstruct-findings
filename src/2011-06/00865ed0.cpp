// roc 2011-06 00865ed0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865ed0
//
// 00865ed0  c701a4b1ac00         mov dword ptr [ecx], 0xacb1a4
// 00865ed6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00865ed9  85c9                 test ecx, ecx
// 00865edb  7407                 je 0x865ee4
// 00865edd  51                   push ecx
// 00865ede  e82144faff           call 0x80a304
// 00865ee3  59                   pop ecx
// 00865ee4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00865ed0(void*);
struct S_func_00865ed0 {
    virtual ~S_func_00865ed0();
    void* m_p;
};
S_func_00865ed0::~S_func_00865ed0()
{
    if (m_p)
        G1_func_00865ed0(m_p);
}
