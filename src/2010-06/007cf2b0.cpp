// roc 2010-06 007cf2b0  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cf2b0
//
// 007cf2b0  c701a88ca500         mov dword ptr [ecx], 0xa58ca8
// 007cf2b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007cf2b9  85c9                 test ecx, ecx
// 007cf2bb  7407                 je 0x7cf2c4
// 007cf2bd  51                   push ecx
// 007cf2be  e88389fdff           call 0x7a7c46
// 007cf2c3  59                   pop ecx
// 007cf2c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007cf2b0(void*);
struct S_func_007cf2b0 {
    virtual ~S_func_007cf2b0();
    void* m_p;
};
S_func_007cf2b0::~S_func_007cf2b0()
{
    if (m_p)
        G1_func_007cf2b0(m_p);
}
