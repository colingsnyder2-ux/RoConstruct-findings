// roc 2009-06 00734710  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00734710
//
// 00734710  c70150318f00         mov dword ptr [ecx], 0x8f3150
// 00734716  8b4904               mov ecx, dword ptr [ecx + 4]
// 00734719  85c9                 test ecx, ecx
// 0073471b  7407                 je 0x734724
// 0073471d  51                   push ecx
// 0073471e  e8bb45feff           call 0x718cde
// 00734723  59                   pop ecx
// 00734724  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00734710(void*);
struct S_func_00734710 {
    virtual ~S_func_00734710();
    void* m_p;
};
S_func_00734710::~S_func_00734710()
{
    if (m_p)
        G1_func_00734710(m_p);
}
