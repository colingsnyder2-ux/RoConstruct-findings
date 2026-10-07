// roc 2010-06 00825000  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00825000
//
// 00825000  c701e850a600         mov dword ptr [ecx], 0xa650e8
// 00825006  8b4904               mov ecx, dword ptr [ecx + 4]
// 00825009  85c9                 test ecx, ecx
// 0082500b  7407                 je 0x825014
// 0082500d  51                   push ecx
// 0082500e  e8332cf8ff           call 0x7a7c46
// 00825013  59                   pop ecx
// 00825014  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00825000(void*);
struct S_func_00825000 {
    virtual ~S_func_00825000();
    void* m_p;
};
S_func_00825000::~S_func_00825000()
{
    if (m_p)
        G1_func_00825000(m_p);
}
