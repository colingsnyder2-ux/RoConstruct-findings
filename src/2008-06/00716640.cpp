// roc 2008-06 00716640  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716640
//
// 00716640  c701acdd8500         mov dword ptr [ecx], 0x85ddac
// 00716646  8b4904               mov ecx, dword ptr [ecx + 4]
// 00716649  85c9                 test ecx, ecx
// 0071664b  7407                 je 0x716654
// 0071664d  51                   push ecx
// 0071664e  e8f7a2f8ff           call 0x6a094a
// 00716653  59                   pop ecx
// 00716654  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00716640(void*);
struct S_func_00716640 {
    virtual ~S_func_00716640();
    void* m_p;
};
S_func_00716640::~S_func_00716640()
{
    if (m_p)
        G1_func_00716640(m_p);
}
