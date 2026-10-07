// roc 2011-06 008d6720  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d6720
//
// 008d6720  c701847dad00         mov dword ptr [ecx], 0xad7d84
// 008d6726  8b4904               mov ecx, dword ptr [ecx + 4]
// 008d6729  85c9                 test ecx, ecx
// 008d672b  7407                 je 0x8d6734
// 008d672d  51                   push ecx
// 008d672e  e8d13bf3ff           call 0x80a304
// 008d6733  59                   pop ecx
// 008d6734  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008d6720(void*);
struct S_func_008d6720 {
    virtual ~S_func_008d6720();
    void* m_p;
};
S_func_008d6720::~S_func_008d6720()
{
    if (m_p)
        G1_func_008d6720(m_p);
}
