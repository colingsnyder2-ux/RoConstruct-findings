// roc 2011-06 008de490  unit: CXTPPropertyGridInplaceButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de490
//
// 008de490  c701d07ead00         mov dword ptr [ecx], 0xad7ed0
// 008de496  8b4904               mov ecx, dword ptr [ecx + 4]
// 008de499  85c9                 test ecx, ecx
// 008de49b  7407                 je 0x8de4a4
// 008de49d  51                   push ecx
// 008de49e  e861bef2ff           call 0x80a304
// 008de4a3  59                   pop ecx
// 008de4a4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008de490(void*);
struct S_func_008de490 {
    virtual ~S_func_008de490();
    void* m_p;
};
S_func_008de490::~S_func_008de490()
{
    if (m_p)
        G1_func_008de490(m_p);
}
