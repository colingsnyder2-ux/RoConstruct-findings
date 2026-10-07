// roc 2009-06 00793ea0  unit: CXTPKeyboardManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793ea0
//
// 00793ea0  c70188019000         mov dword ptr [ecx], 0x900188
// 00793ea6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00793ea9  85c9                 test ecx, ecx
// 00793eab  7407                 je 0x793eb4
// 00793ead  51                   push ecx
// 00793eae  e82b4ef8ff           call 0x718cde
// 00793eb3  59                   pop ecx
// 00793eb4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00793ea0(void*);
struct S_func_00793ea0 {
    virtual ~S_func_00793ea0();
    void* m_p;
};
S_func_00793ea0::~S_func_00793ea0()
{
    if (m_p)
        G1_func_00793ea0(m_p);
}
