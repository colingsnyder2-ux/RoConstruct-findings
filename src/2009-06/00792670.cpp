// roc 2009-06 00792670  unit: CXTCaption  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00792670
//
// 00792670  c701ecff8f00         mov dword ptr [ecx], 0x8fffec
// 00792676  8b4904               mov ecx, dword ptr [ecx + 4]
// 00792679  85c9                 test ecx, ecx
// 0079267b  7407                 je 0x792684
// 0079267d  51                   push ecx
// 0079267e  e85b66f8ff           call 0x718cde
// 00792683  59                   pop ecx
// 00792684  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00792670(void*);
struct S_func_00792670 {
    virtual ~S_func_00792670();
    void* m_p;
};
S_func_00792670::~S_func_00792670()
{
    if (m_p)
        G1_func_00792670(m_p);
}
