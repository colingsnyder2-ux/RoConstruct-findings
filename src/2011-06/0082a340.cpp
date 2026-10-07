// roc 2011-06 0082a340  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082a340
//
// 0082a340  c701d43cac00         mov dword ptr [ecx], 0xac3cd4
// 0082a346  8b4904               mov ecx, dword ptr [ecx + 4]
// 0082a349  85c9                 test ecx, ecx
// 0082a34b  7407                 je 0x82a354
// 0082a34d  51                   push ecx
// 0082a34e  e8b1fffdff           call 0x80a304
// 0082a353  59                   pop ecx
// 0082a354  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0082a340(void*);
struct S_func_0082a340 {
    virtual ~S_func_0082a340();
    void* m_p;
};
S_func_0082a340::~S_func_0082a340()
{
    if (m_p)
        G1_func_0082a340(m_p);
}
