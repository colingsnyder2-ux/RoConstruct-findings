// roc 2010-06 00841770  unit: CXTPKeyboardManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00841770
//
// 00841770  c7014074a600         mov dword ptr [ecx], 0xa67440
// 00841776  8b4904               mov ecx, dword ptr [ecx + 4]
// 00841779  85c9                 test ecx, ecx
// 0084177b  7407                 je 0x841784
// 0084177d  51                   push ecx
// 0084177e  e8c364f6ff           call 0x7a7c46
// 00841783  59                   pop ecx
// 00841784  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00841770(void*);
struct S_func_00841770 {
    virtual ~S_func_00841770();
    void* m_p;
};
S_func_00841770::~S_func_00841770()
{
    if (m_p)
        G1_func_00841770(m_p);
}
