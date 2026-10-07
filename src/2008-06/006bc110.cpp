// roc 2008-06 006bc110  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bc110
//
// 006bc110  c701c0208500         mov dword ptr [ecx], 0x8520c0
// 006bc116  8b4904               mov ecx, dword ptr [ecx + 4]
// 006bc119  85c9                 test ecx, ecx
// 006bc11b  7407                 je 0x6bc124
// 006bc11d  51                   push ecx
// 006bc11e  e82748feff           call 0x6a094a
// 006bc123  59                   pop ecx
// 006bc124  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006bc110(void*);
struct S_func_006bc110 {
    virtual ~S_func_006bc110();
    void* m_p;
};
S_func_006bc110::~S_func_006bc110()
{
    if (m_p)
        G1_func_006bc110(m_p);
}
