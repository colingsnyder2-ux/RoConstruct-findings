// roc 2009-06 00729ad0  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729ad0
//
// 00729ad0  c7018c278f00         mov dword ptr [ecx], 0x8f278c
// 00729ad6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00729ad9  85c9                 test ecx, ecx
// 00729adb  7407                 je 0x729ae4
// 00729add  51                   push ecx
// 00729ade  e8fbf1feff           call 0x718cde
// 00729ae3  59                   pop ecx
// 00729ae4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00729ad0(void*);
struct S_func_00729ad0 {
    virtual ~S_func_00729ad0();
    void* m_p;
};
S_func_00729ad0::~S_func_00729ad0()
{
    if (m_p)
        G1_func_00729ad0(m_p);
}
