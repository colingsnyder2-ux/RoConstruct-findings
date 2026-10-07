// roc 2011-06 008fa960  unit: CXTPRibbonGroup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fa960
//
// 008fa960  c7017cb8ad00         mov dword ptr [ecx], 0xadb87c
// 008fa966  8b4904               mov ecx, dword ptr [ecx + 4]
// 008fa969  85c9                 test ecx, ecx
// 008fa96b  7407                 je 0x8fa974
// 008fa96d  51                   push ecx
// 008fa96e  e891f9f0ff           call 0x80a304
// 008fa973  59                   pop ecx
// 008fa974  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008fa960(void*);
struct S_func_008fa960 {
    virtual ~S_func_008fa960();
    void* m_p;
};
S_func_008fa960::~S_func_008fa960()
{
    if (m_p)
        G1_func_008fa960(m_p);
}
