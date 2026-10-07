// roc 2007-08 006b5e30  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006b5e30
//
// 006b5e30  c70134637d00         mov dword ptr [ecx], 0x7d6334
// 006b5e36  8b4904               mov ecx, dword ptr [ecx + 4]
// 006b5e39  85c9                 test ecx, ecx
// 006b5e3b  7407                 je 0x6b5e44
// 006b5e3d  51                   push ecx
// 006b5e3e  e8e3a0f7ff           call 0x62ff26
// 006b5e43  59                   pop ecx
// 006b5e44  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006b5e30(void*);
struct S_func_006b5e30 {
    virtual ~S_func_006b5e30();
    void* m_p;
};
S_func_006b5e30::~S_func_006b5e30()
{
    if (m_p)
        G1_func_006b5e30(m_p);
}
