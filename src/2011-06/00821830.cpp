// roc 2011-06 00821830  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00821830
//
// 00821830  c7012030ac00         mov dword ptr [ecx], 0xac3020
// 00821836  8b4904               mov ecx, dword ptr [ecx + 4]
// 00821839  85c9                 test ecx, ecx
// 0082183b  7407                 je 0x821844
// 0082183d  51                   push ecx
// 0082183e  e8c18afeff           call 0x80a304
// 00821843  59                   pop ecx
// 00821844  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00821830(void*);
struct S_func_00821830 {
    virtual ~S_func_00821830();
    void* m_p;
};
S_func_00821830::~S_func_00821830()
{
    if (m_p)
        G1_func_00821830(m_p);
}
