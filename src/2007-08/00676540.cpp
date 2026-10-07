// roc 2007-08 00676540  unit: CXTPCustomizeCommandsPage  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00676540
//
// 00676540  c70150ce7c00         mov dword ptr [ecx], 0x7cce50
// 00676546  8b4904               mov ecx, dword ptr [ecx + 4]
// 00676549  85c9                 test ecx, ecx
// 0067654b  7407                 je 0x676554
// 0067654d  51                   push ecx
// 0067654e  e8d399fbff           call 0x62ff26
// 00676553  59                   pop ecx
// 00676554  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00676540(void*);
struct S_func_00676540 {
    virtual ~S_func_00676540();
    void* m_p;
};
S_func_00676540::~S_func_00676540()
{
    if (m_p)
        G1_func_00676540(m_p);
}
