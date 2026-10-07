// roc 2008-06 00774660  unit: VCEdit::?$CXTMaskEditT  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00774660
//
// 00774660  c701008a8600         mov dword ptr [ecx], 0x868a00
// 00774666  8b4904               mov ecx, dword ptr [ecx + 4]
// 00774669  85c9                 test ecx, ecx
// 0077466b  7407                 je 0x774674
// 0077466d  51                   push ecx
// 0077466e  e8d7c2f2ff           call 0x6a094a
// 00774673  59                   pop ecx
// 00774674  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00774660(void*);
struct S_func_00774660 {
    virtual ~S_func_00774660();
    void* m_p;
};
S_func_00774660::~S_func_00774660()
{
    if (m_p)
        G1_func_00774660(m_p);
}
