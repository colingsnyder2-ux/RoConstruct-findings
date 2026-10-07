// roc 2010-06 007ba400  unit: CXTPControlComboBoxPopupBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ba400
//
// 007ba400  c7017470a500         mov dword ptr [ecx], 0xa57074
// 007ba406  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ba409  85c9                 test ecx, ecx
// 007ba40b  7407                 je 0x7ba414
// 007ba40d  51                   push ecx
// 007ba40e  e833d8feff           call 0x7a7c46
// 007ba413  59                   pop ecx
// 007ba414  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007ba400(void*);
struct S_func_007ba400 {
    virtual ~S_func_007ba400();
    void* m_p;
};
S_func_007ba400::~S_func_007ba400()
{
    if (m_p)
        G1_func_007ba400(m_p);
}
