// roc 2007-08 006f7080  unit: VCEdit::?$CXTMaskEditT  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006f7080
//
// 006f7080  c70170c67d00         mov dword ptr [ecx], 0x7dc670
// 006f7086  8b4904               mov ecx, dword ptr [ecx + 4]
// 006f7089  85c9                 test ecx, ecx
// 006f708b  7407                 je 0x6f7094
// 006f708d  51                   push ecx
// 006f708e  e8938ef3ff           call 0x62ff26
// 006f7093  59                   pop ecx
// 006f7094  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006f7080(void*);
struct S_func_006f7080 {
    virtual ~S_func_006f7080();
    void* m_p;
};
S_func_006f7080::~S_func_006f7080()
{
    if (m_p)
        G1_func_006f7080(m_p);
}
