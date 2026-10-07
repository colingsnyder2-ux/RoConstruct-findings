// roc 2009-06 00734650  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00734650
//
// 00734650  c70108318f00         mov dword ptr [ecx], 0x8f3108
// 00734656  8b4904               mov ecx, dword ptr [ecx + 4]
// 00734659  85c9                 test ecx, ecx
// 0073465b  7407                 je 0x734664
// 0073465d  51                   push ecx
// 0073465e  e87b46feff           call 0x718cde
// 00734663  59                   pop ecx
// 00734664  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00734650(void*);
struct S_func_00734650 {
    virtual ~S_func_00734650();
    void* m_p;
};
S_func_00734650::~S_func_00734650()
{
    if (m_p)
        G1_func_00734650(m_p);
}
