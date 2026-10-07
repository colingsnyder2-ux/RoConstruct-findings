// roc 2009-06 0079ce70  unit: CXTPControlGalleryPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079ce70
//
// 0079ce70  c701a8149000         mov dword ptr [ecx], 0x9014a8
// 0079ce76  8b4904               mov ecx, dword ptr [ecx + 4]
// 0079ce79  85c9                 test ecx, ecx
// 0079ce7b  7407                 je 0x79ce84
// 0079ce7d  51                   push ecx
// 0079ce7e  e85bbef7ff           call 0x718cde
// 0079ce83  59                   pop ecx
// 0079ce84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0079ce70(void*);
struct S_func_0079ce70 {
    virtual ~S_func_0079ce70();
    void* m_p;
};
S_func_0079ce70::~S_func_0079ce70()
{
    if (m_p)
        G1_func_0079ce70(m_p);
}
