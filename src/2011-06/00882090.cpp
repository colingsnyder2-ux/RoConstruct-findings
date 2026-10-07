// roc 2011-06 00882090  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00882090
//
// 00882090  c70108fbac00         mov dword ptr [ecx], 0xacfb08
// 00882096  8b4904               mov ecx, dword ptr [ecx + 4]
// 00882099  85c9                 test ecx, ecx
// 0088209b  7407                 je 0x8820a4
// 0088209d  51                   push ecx
// 0088209e  e86182f8ff           call 0x80a304
// 008820a3  59                   pop ecx
// 008820a4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00882090(void*);
struct S_func_00882090 {
    virtual ~S_func_00882090();
    void* m_p;
};
S_func_00882090::~S_func_00882090()
{
    if (m_p)
        G1_func_00882090(m_p);
}
