// roc 2007-08 0066c640  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0066c640
//
// 0066c640  c70198b07c00         mov dword ptr [ecx], 0x7cb098
// 0066c646  8b4904               mov ecx, dword ptr [ecx + 4]
// 0066c649  85c9                 test ecx, ecx
// 0066c64b  7407                 je 0x66c654
// 0066c64d  51                   push ecx
// 0066c64e  e8d338fcff           call 0x62ff26
// 0066c653  59                   pop ecx
// 0066c654  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0066c640(void*);
struct S_func_0066c640 {
    virtual ~S_func_0066c640();
    void* m_p;
};
S_func_0066c640::~S_func_0066c640()
{
    if (m_p)
        G1_func_0066c640(m_p);
}
