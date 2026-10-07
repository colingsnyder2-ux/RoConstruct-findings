// roc 2010-06 0080acf0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080acf0
//
// 0080acf0  c7011c0fa600         mov dword ptr [ecx], 0xa60f1c
// 0080acf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0080acf9  85c9                 test ecx, ecx
// 0080acfb  7407                 je 0x80ad04
// 0080acfd  51                   push ecx
// 0080acfe  e843cff9ff           call 0x7a7c46
// 0080ad03  59                   pop ecx
// 0080ad04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0080acf0(void*);
struct S_func_0080acf0 {
    virtual ~S_func_0080acf0();
    void* m_p;
};
S_func_0080acf0::~S_func_0080acf0()
{
    if (m_p)
        G1_func_0080acf0(m_p);
}
