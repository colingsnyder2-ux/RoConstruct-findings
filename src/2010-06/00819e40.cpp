// roc 2010-06 00819e40  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00819e40
//
// 00819e40  c701a02ca600         mov dword ptr [ecx], 0xa62ca0
// 00819e46  8b4904               mov ecx, dword ptr [ecx + 4]
// 00819e49  85c9                 test ecx, ecx
// 00819e4b  7407                 je 0x819e54
// 00819e4d  51                   push ecx
// 00819e4e  e8f3ddf8ff           call 0x7a7c46
// 00819e53  59                   pop ecx
// 00819e54  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00819e40(void*);
struct S_func_00819e40 {
    virtual ~S_func_00819e40();
    void* m_p;
};
S_func_00819e40::~S_func_00819e40()
{
    if (m_p)
        G1_func_00819e40(m_p);
}
