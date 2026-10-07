// roc 2009-06 007eba90  unit: CXTPPropertyGridInplaceButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eba90
//
// 007eba90  c70198969000         mov dword ptr [ecx], 0x909698
// 007eba96  8b4904               mov ecx, dword ptr [ecx + 4]
// 007eba99  85c9                 test ecx, ecx
// 007eba9b  7407                 je 0x7ebaa4
// 007eba9d  51                   push ecx
// 007eba9e  e83bd2f2ff           call 0x718cde
// 007ebaa3  59                   pop ecx
// 007ebaa4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007eba90(void*);
struct S_func_007eba90 {
    virtual ~S_func_007eba90();
    void* m_p;
};
S_func_007eba90::~S_func_007eba90()
{
    if (m_p)
        G1_func_007eba90(m_p);
}
