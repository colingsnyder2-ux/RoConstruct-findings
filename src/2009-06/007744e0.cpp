// roc 2009-06 007744e0  unit: CXTPPropertyGrid  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007744e0
//
// 007744e0  c70108bb8f00         mov dword ptr [ecx], 0x8fbb08
// 007744e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007744e9  85c9                 test ecx, ecx
// 007744eb  7407                 je 0x7744f4
// 007744ed  51                   push ecx
// 007744ee  e8eb47faff           call 0x718cde
// 007744f3  59                   pop ecx
// 007744f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007744e0(void*);
struct S_func_007744e0 {
    virtual ~S_func_007744e0();
    void* m_p;
};
S_func_007744e0::~S_func_007744e0()
{
    if (m_p)
        G1_func_007744e0(m_p);
}
