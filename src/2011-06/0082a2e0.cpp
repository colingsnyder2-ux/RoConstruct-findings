// roc 2011-06 0082a2e0  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a2e0
//
// 0082a2e0  c701bc3cac00         mov dword ptr [ecx], 0xac3cbc
// 0082a2e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082a2e9  85c9                 test ecx, ecx
// 0082a2eb  7407                 je 0x82a2f4
// 0082a2ed  51                   push ecx
// 0082a2ee  e81100feff           call 0x80a304
// 0082a2f3  59                   pop ecx
// 0082a2f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0082a2e0(void*);
struct S_func_0082a2e0 {
    virtual ~S_func_0082a2e0();
    void* m_p;
};
S_func_0082a2e0::~S_func_0082a2e0()
{
    if (m_p)
        G1_func_0082a2e0(m_p);
}
