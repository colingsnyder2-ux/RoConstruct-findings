// roc 2008-06 0072e7f0  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e7f0
//
// 0072e7f0  c70110228600         mov dword ptr [ecx], 0x862210
// 0072e7f6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0072e7f9  85c9                 test ecx, ecx
// 0072e7fb  7407                 je 0x72e804
// 0072e7fd  51                   push ecx
// 0072e7fe  e84721f7ff           call 0x6a094a
// 0072e803  59                   pop ecx
// 0072e804  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0072e7f0(void*);
struct S_func_0072e7f0 {
    virtual ~S_func_0072e7f0();
    void* m_p;
};
S_func_0072e7f0::~S_func_0072e7f0()
{
    if (m_p)
        G1_func_0072e7f0(m_p);
}
