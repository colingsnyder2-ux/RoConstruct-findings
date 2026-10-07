// roc 2010-06 0081de00  unit: CXTPPropertyGridView  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0081de00
//
// 0081de00  c7016c35a600         mov dword ptr [ecx], 0xa6356c
// 0081de06  8b4904               mov ecx, dword ptr [ecx + 4]
// 0081de09  85c9                 test ecx, ecx
// 0081de0b  7407                 je 0x81de14
// 0081de0d  51                   push ecx
// 0081de0e  e8339ef8ff           call 0x7a7c46
// 0081de13  59                   pop ecx
// 0081de14  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0081de00(void*);
struct S_func_0081de00 {
    virtual ~S_func_0081de00();
    void* m_p;
};
S_func_0081de00::~S_func_0081de00()
{
    if (m_p)
        G1_func_0081de00(m_p);
}
