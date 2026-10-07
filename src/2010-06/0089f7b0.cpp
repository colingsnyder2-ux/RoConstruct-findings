// roc 2010-06 0089f7b0  unit: CXTPRibbonTab  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f7b0
//
// 0089f7b0  c7013814a700         mov dword ptr [ecx], 0xa71438
// 0089f7b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089f7b9  85c9                 test ecx, ecx
// 0089f7bb  7407                 je 0x89f7c4
// 0089f7bd  51                   push ecx
// 0089f7be  e88384f0ff           call 0x7a7c46
// 0089f7c3  59                   pop ecx
// 0089f7c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0089f7b0(void*);
struct S_func_0089f7b0 {
    virtual ~S_func_0089f7b0();
    void* m_p;
};
S_func_0089f7b0::~S_func_0089f7b0()
{
    if (m_p)
        G1_func_0089f7b0(m_p);
}
