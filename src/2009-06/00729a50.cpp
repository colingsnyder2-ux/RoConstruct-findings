// roc 2009-06 00729a50  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729a50
//
// 00729a50  c7015c278f00         mov dword ptr [ecx], 0x8f275c
// 00729a56  8b4904               mov ecx, dword ptr [ecx + 4]
// 00729a59  85c9                 test ecx, ecx
// 00729a5b  7407                 je 0x729a64
// 00729a5d  51                   push ecx
// 00729a5e  e87bf2feff           call 0x718cde
// 00729a63  59                   pop ecx
// 00729a64  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00729a50(void*);
struct S_func_00729a50 {
    virtual ~S_func_00729a50();
    void* m_p;
};
S_func_00729a50::~S_func_00729a50()
{
    if (m_p)
        G1_func_00729a50(m_p);
}
