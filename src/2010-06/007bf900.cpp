// roc 2010-06 007bf900  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bf900
//
// 007bf900  c7010874a500         mov dword ptr [ecx], 0xa57408
// 007bf906  8b4904               mov ecx, dword ptr [ecx + 4]
// 007bf909  85c9                 test ecx, ecx
// 007bf90b  7407                 je 0x7bf914
// 007bf90d  51                   push ecx
// 007bf90e  e83383feff           call 0x7a7c46
// 007bf913  59                   pop ecx
// 007bf914  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007bf900(void*);
struct S_func_007bf900 {
    virtual ~S_func_007bf900();
    void* m_p;
};
S_func_007bf900::~S_func_007bf900()
{
    if (m_p)
        G1_func_007bf900(m_p);
}
