// roc 2007-08 0068a180  unit: CXTPTabClientWnd  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068a180
//
// 0068a180  c701fcfc7c00         mov dword ptr [ecx], 0x7cfcfc
// 0068a186  8b4904               mov ecx, dword ptr [ecx + 4]
// 0068a189  85c9                 test ecx, ecx
// 0068a18b  7407                 je 0x68a194
// 0068a18d  51                   push ecx
// 0068a18e  e8935dfaff           call 0x62ff26
// 0068a193  59                   pop ecx
// 0068a194  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0068a180(void*);
struct S_func_0068a180 {
    virtual ~S_func_0068a180();
    void* m_p;
};
S_func_0068a180::~S_func_0068a180()
{
    if (m_p)
        G1_func_0068a180(m_p);
}
