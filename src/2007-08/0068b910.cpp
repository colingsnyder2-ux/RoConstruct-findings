// roc 2007-08 0068b910  unit: CXTPTabClientWnd  size: 21 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b910
//
// 0068b910  c701dcfe7c00         mov dword ptr [ecx], 0x7cfedc
// 0068b916  8b4904               mov ecx, dword ptr [ecx + 4]
// 0068b919  85c9                 test ecx, ecx
// 0068b91b  7407                 je 0x68b924
// 0068b91d  51                   push ecx
// 0068b91e  e80346faff           call 0x62ff26
// 0068b923  59                   pop ecx
// 0068b924  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0068b910(void*);
struct S_func_0068b910 {
    virtual ~S_func_0068b910();
    void* m_p;
};
S_func_0068b910::~S_func_0068b910()
{
    if (m_p)
        G1_func_0068b910(m_p);
}
