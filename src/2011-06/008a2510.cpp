// roc 2011-06 008a2510  unit: ATL::CRegObject  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a2510
//
// 008a2510  c7018027ad00         mov dword ptr [ecx], 0xad2780
// 008a2516  8b4904               mov ecx, dword ptr [ecx + 4]
// 008a2519  85c9                 test ecx, ecx
// 008a251b  7407                 je 0x8a2524
// 008a251d  51                   push ecx
// 008a251e  e8e17df6ff           call 0x80a304
// 008a2523  59                   pop ecx
// 008a2524  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008a2510(void*);
struct S_func_008a2510 {
    virtual ~S_func_008a2510();
    void* m_p;
};
S_func_008a2510::~S_func_008a2510()
{
    if (m_p)
        G1_func_008a2510(m_p);
}
