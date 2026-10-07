// roc 2008-06 006d7f90  unit: CInstanceRecord  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7f90
//
// 006d7f90  c70144458500         mov dword ptr [ecx], 0x854544
// 006d7f96  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d7f99  85c9                 test ecx, ecx
// 006d7f9b  7407                 je 0x6d7fa4
// 006d7f9d  51                   push ecx
// 006d7f9e  e8a789fcff           call 0x6a094a
// 006d7fa3  59                   pop ecx
// 006d7fa4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006d7f90(void*);
struct S_func_006d7f90 {
    virtual ~S_func_006d7f90();
    void* m_p;
};
S_func_006d7f90::~S_func_006d7f90()
{
    if (m_p)
        G1_func_006d7f90(m_p);
}
