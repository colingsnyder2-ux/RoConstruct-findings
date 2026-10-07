// roc 2009-06 007402b0  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007402b0
//
// 007402b0  c701e4448f00         mov dword ptr [ecx], 0x8f44e4
// 007402b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007402b9  85c9                 test ecx, ecx
// 007402bb  7407                 je 0x7402c4
// 007402bd  51                   push ecx
// 007402be  e81b8afdff           call 0x718cde
// 007402c3  59                   pop ecx
// 007402c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007402b0(void*);
struct S_func_007402b0 {
    virtual ~S_func_007402b0();
    void* m_p;
};
S_func_007402b0::~S_func_007402b0()
{
    if (m_p)
        G1_func_007402b0(m_p);
}
