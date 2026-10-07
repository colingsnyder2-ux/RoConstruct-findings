// roc 2009-06 00729a90  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729a90
//
// 00729a90  c70174278f00         mov dword ptr [ecx], 0x8f2774
// 00729a96  8b4904               mov ecx, dword ptr [ecx + 4]
// 00729a99  85c9                 test ecx, ecx
// 00729a9b  7407                 je 0x729aa4
// 00729a9d  51                   push ecx
// 00729a9e  e83bf2feff           call 0x718cde
// 00729aa3  59                   pop ecx
// 00729aa4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00729a90(void*);
struct S_func_00729a90 {
    virtual ~S_func_00729a90();
    void* m_p;
};
S_func_00729a90::~S_func_00729a90()
{
    if (m_p)
        G1_func_00729a90(m_p);
}
