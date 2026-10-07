// roc 2007-08 006c8ff0  unit: CXTPControlEditCtrl  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8ff0
//
// 006c8ff0  c70164787d00         mov dword ptr [ecx], 0x7d7864
// 006c8ff6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c8ff9  85c9                 test ecx, ecx
// 006c8ffb  7407                 je 0x6c9004
// 006c8ffd  51                   push ecx
// 006c8ffe  e8236ff6ff           call 0x62ff26
// 006c9003  59                   pop ecx
// 006c9004  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006c8ff0(void*);
struct S_func_006c8ff0 {
    virtual ~S_func_006c8ff0();
    void* m_p;
};
S_func_006c8ff0::~S_func_006c8ff0()
{
    if (m_p)
        G1_func_006c8ff0(m_p);
}
