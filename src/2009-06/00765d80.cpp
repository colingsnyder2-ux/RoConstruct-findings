// roc 2009-06 00765d80  unit: CXTPCustomizeCommandsPage  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765d80
//
// 00765d80  c701e8968f00         mov dword ptr [ecx], 0x8f96e8
// 00765d86  8b4904               mov ecx, dword ptr [ecx + 4]
// 00765d89  85c9                 test ecx, ecx
// 00765d8b  7407                 je 0x765d94
// 00765d8d  51                   push ecx
// 00765d8e  e84b2ffbff           call 0x718cde
// 00765d93  59                   pop ecx
// 00765d94  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00765d80(void*);
struct S_func_00765d80 {
    virtual ~S_func_00765d80();
    void* m_p;
};
S_func_00765d80::~S_func_00765d80()
{
    if (m_p)
        G1_func_00765d80(m_p);
}
