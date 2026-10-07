// roc 2011-06 0089db40  unit: CXTPHookManagerHookAble  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089db40
//
// 0089db40  c701281ead00         mov dword ptr [ecx], 0xad1e28
// 0089db46  8b4904               mov ecx, dword ptr [ecx + 4]
// 0089db49  85c9                 test ecx, ecx
// 0089db4b  7407                 je 0x89db54
// 0089db4d  51                   push ecx
// 0089db4e  e8b1c7f6ff           call 0x80a304
// 0089db53  59                   pop ecx
// 0089db54  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0089db40(void*);
struct S_func_0089db40 {
    virtual ~S_func_0089db40();
    void* m_p;
};
S_func_0089db40::~S_func_0089db40()
{
    if (m_p)
        G1_func_0089db40(m_p);
}
