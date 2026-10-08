// roc 2007-08 006548b0  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006548b0
//
// 006548b0  c701807f7c00         mov dword ptr [ecx], 0x7c7f80
// 006548b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006548b9  85c9                 test ecx, ecx
// 006548bb  7407                 je 0x6548c4
// 006548bd  51                   push ecx
// 006548be  e863b6fdff           call 0x62ff26
// 006548c3  59                   pop ecx
// 006548c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006548b0(void*);
struct S_func_006548b0 {
    virtual ~S_func_006548b0();
    void* m_p;
};
S_func_006548b0::~S_func_006548b0()
{
    if (m_p)
        G1_func_006548b0(m_p);
}
