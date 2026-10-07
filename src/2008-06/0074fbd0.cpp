// roc 2008-06 0074fbd0  unit: CXTPReportHyperlinks  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074fbd0
//
// 0074fbd0  c70140458600         mov dword ptr [ecx], 0x864540
// 0074fbd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0074fbd9  85c9                 test ecx, ecx
// 0074fbdb  7407                 je 0x74fbe4
// 0074fbdd  51                   push ecx
// 0074fbde  e8670df5ff           call 0x6a094a
// 0074fbe3  59                   pop ecx
// 0074fbe4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0074fbd0(void*);
struct S_func_0074fbd0 {
    virtual ~S_func_0074fbd0();
    void* m_p;
};
S_func_0074fbd0::~S_func_0074fbd0()
{
    if (m_p)
        G1_func_0074fbd0(m_p);
}
