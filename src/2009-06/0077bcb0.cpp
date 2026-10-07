// roc 2009-06 0077bcb0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077bcb0
//
// 0077bcb0  c701b4c78f00         mov dword ptr [ecx], 0x8fc7b4
// 0077bcb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077bcb9  85c9                 test ecx, ecx
// 0077bcbb  7407                 je 0x77bcc4
// 0077bcbd  51                   push ecx
// 0077bcbe  e81bd0f9ff           call 0x718cde
// 0077bcc3  59                   pop ecx
// 0077bcc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0077bcb0(void*);
struct S_func_0077bcb0 {
    virtual ~S_func_0077bcb0();
    void* m_p;
};
S_func_0077bcb0::~S_func_0077bcb0()
{
    if (m_p)
        G1_func_0077bcb0(m_p);
}
