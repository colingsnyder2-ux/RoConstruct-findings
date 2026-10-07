// roc 2011-06 0083f820  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f820
//
// 0083f820  c701f456ac00         mov dword ptr [ecx], 0xac56f4
// 0083f826  8b4904               mov ecx, dword ptr [ecx + 4]
// 0083f829  85c9                 test ecx, ecx
// 0083f82b  7407                 je 0x83f834
// 0083f82d  51                   push ecx
// 0083f82e  e8d1aafcff           call 0x80a304
// 0083f833  59                   pop ecx
// 0083f834  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0083f820(void*);
struct S_func_0083f820 {
    virtual ~S_func_0083f820();
    void* m_p;
};
S_func_0083f820::~S_func_0083f820()
{
    if (m_p)
        G1_func_0083f820(m_p);
}
