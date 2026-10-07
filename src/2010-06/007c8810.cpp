// roc 2010-06 007c8810  unit: MyXTPCommandBars  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c8810
//
// 007c8810  c7016c80a500         mov dword ptr [ecx], 0xa5806c
// 007c8816  8b4904               mov ecx, dword ptr [ecx + 4]
// 007c8819  85c9                 test ecx, ecx
// 007c881b  7407                 je 0x7c8824
// 007c881d  51                   push ecx
// 007c881e  e823f4fdff           call 0x7a7c46
// 007c8823  59                   pop ecx
// 007c8824  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007c8810(void*);
struct S_func_007c8810 {
    virtual ~S_func_007c8810();
    void* m_p;
};
S_func_007c8810::~S_func_007c8810()
{
    if (m_p)
        G1_func_007c8810(m_p);
}
