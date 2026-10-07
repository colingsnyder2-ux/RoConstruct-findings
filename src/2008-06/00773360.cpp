// roc 2008-06 00773360  unit: CXTPPropertyGridInplaceButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773360
//
// 00773360  c70170868600         mov dword ptr [ecx], 0x868670
// 00773366  8b4904               mov ecx, dword ptr [ecx + 4]
// 00773369  85c9                 test ecx, ecx
// 0077336b  7407                 je 0x773374
// 0077336d  51                   push ecx
// 0077336e  e8d7d5f2ff           call 0x6a094a
// 00773373  59                   pop ecx
// 00773374  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00773360(void*);
struct S_func_00773360 {
    virtual ~S_func_00773360();
    void* m_p;
};
S_func_00773360::~S_func_00773360()
{
    if (m_p)
        G1_func_00773360(m_p);
}
