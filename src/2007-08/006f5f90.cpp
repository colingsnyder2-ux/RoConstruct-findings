// roc 2007-08 006f5f90  unit: CXTPPropertyGridInplaceButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5f90
//
// 006f5f90  c701f0c27d00         mov dword ptr [ecx], 0x7dc2f0
// 006f5f96  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f5f99  85c9                 test ecx, ecx
// 006f5f9b  7407                 je 0x6f5fa4
// 006f5f9d  51                   push ecx
// 006f5f9e  e8839ff3ff           call 0x62ff26
// 006f5fa3  59                   pop ecx
// 006f5fa4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006f5f90(void*);
struct S_func_006f5f90 {
    virtual ~S_func_006f5f90();
    void* m_p;
};
S_func_006f5f90::~S_func_006f5f90()
{
    if (m_p)
        G1_func_006f5f90(m_p);
}
