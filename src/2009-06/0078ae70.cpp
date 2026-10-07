// roc 2009-06 0078ae70  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0078ae70
//
// 0078ae70  c70138e58f00         mov dword ptr [ecx], 0x8fe538
// 0078ae76  8b4904               mov ecx, dword ptr [ecx + 4]
// 0078ae79  85c9                 test ecx, ecx
// 0078ae7b  7407                 je 0x78ae84
// 0078ae7d  51                   push ecx
// 0078ae7e  e85bdef8ff           call 0x718cde
// 0078ae83  59                   pop ecx
// 0078ae84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0078ae70(void*);
struct S_func_0078ae70 {
    virtual ~S_func_0078ae70();
    void* m_p;
};
S_func_0078ae70::~S_func_0078ae70()
{
    if (m_p)
        G1_func_0078ae70(m_p);
}
