// roc 2007-08 006a2e40  unit: CXTPHookManagerHookAble  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2e40
//
// 006a2e40  c70120357d00         mov dword ptr [ecx], 0x7d3520
// 006a2e46  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a2e49  85c9                 test ecx, ecx
// 006a2e4b  7407                 je 0x6a2e54
// 006a2e4d  51                   push ecx
// 006a2e4e  e8d3d0f8ff           call 0x62ff26
// 006a2e53  59                   pop ecx
// 006a2e54  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a2e40(void*);
struct S_func_006a2e40 {
    virtual ~S_func_006a2e40();
    void* m_p;
};
S_func_006a2e40::~S_func_006a2e40()
{
    if (m_p)
        G1_func_006a2e40(m_p);
}
