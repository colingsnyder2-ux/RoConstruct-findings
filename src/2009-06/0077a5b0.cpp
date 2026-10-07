// roc 2009-06 0077a5b0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a5b0
//
// 0077a5b0  c70184c78f00         mov dword ptr [ecx], 0x8fc784
// 0077a5b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077a5b9  85c9                 test ecx, ecx
// 0077a5bb  7407                 je 0x77a5c4
// 0077a5bd  51                   push ecx
// 0077a5be  e81be7f9ff           call 0x718cde
// 0077a5c3  59                   pop ecx
// 0077a5c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0077a5b0(void*);
struct S_func_0077a5b0 {
    virtual ~S_func_0077a5b0();
    void* m_p;
};
S_func_0077a5b0::~S_func_0077a5b0()
{
    if (m_p)
        G1_func_0077a5b0(m_p);
}
