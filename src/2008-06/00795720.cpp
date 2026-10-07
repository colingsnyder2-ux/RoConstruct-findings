// roc 2008-06 00795720  unit: CXTPRibbonGroup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00795720
//
// 00795720  c701e0b78600         mov dword ptr [ecx], 0x86b7e0
// 00795726  8b4904               mov ecx, dword ptr [ecx + 4]
// 00795729  85c9                 test ecx, ecx
// 0079572b  7407                 je 0x795734
// 0079572d  51                   push ecx
// 0079572e  e817b2f0ff           call 0x6a094a
// 00795733  59                   pop ecx
// 00795734  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00795720(void*);
struct S_func_00795720 {
    virtual ~S_func_00795720();
    void* m_p;
};
S_func_00795720::~S_func_00795720()
{
    if (m_p)
        G1_func_00795720(m_p);
}
