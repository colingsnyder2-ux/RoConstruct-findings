// roc 2008-06 006bc240  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bc240
//
// 006bc240  c70108218500         mov dword ptr [ecx], 0x852108
// 006bc246  8b4904               mov ecx, dword ptr [ecx + 4]
// 006bc249  85c9                 test ecx, ecx
// 006bc24b  7407                 je 0x6bc254
// 006bc24d  51                   push ecx
// 006bc24e  e8f746feff           call 0x6a094a
// 006bc253  59                   pop ecx
// 006bc254  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006bc240(void*);
struct S_func_006bc240 {
    virtual ~S_func_006bc240();
    void* m_p;
};
S_func_006bc240::~S_func_006bc240()
{
    if (m_p)
        G1_func_006bc240(m_p);
}
