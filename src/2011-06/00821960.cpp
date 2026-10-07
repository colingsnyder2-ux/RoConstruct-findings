// roc 2011-06 00821960  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00821960
//
// 00821960  c7016830ac00         mov dword ptr [ecx], 0xac3068
// 00821966  8b4904               mov ecx, dword ptr [ecx + 4]
// 00821969  85c9                 test ecx, ecx
// 0082196b  7407                 je 0x821974
// 0082196d  51                   push ecx
// 0082196e  e89189feff           call 0x80a304
// 00821973  59                   pop ecx
// 00821974  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00821960(void*);
struct S_func_00821960 {
    virtual ~S_func_00821960();
    void* m_p;
};
S_func_00821960::~S_func_00821960()
{
    if (m_p)
        G1_func_00821960(m_p);
}
