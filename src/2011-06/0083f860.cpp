// roc 2011-06 0083f860  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083f860
//
// 0083f860  c7010c57ac00         mov dword ptr [ecx], 0xac570c
// 0083f866  8b4904               mov ecx, dword ptr [ecx + 4]
// 0083f869  85c9                 test ecx, ecx
// 0083f86b  7407                 je 0x83f874
// 0083f86d  51                   push ecx
// 0083f86e  e891aafcff           call 0x80a304
// 0083f873  59                   pop ecx
// 0083f874  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0083f860(void*);
struct S_func_0083f860 {
    virtual ~S_func_0083f860();
    void* m_p;
};
S_func_0083f860::~S_func_0083f860()
{
    if (m_p)
        G1_func_0083f860(m_p);
}
