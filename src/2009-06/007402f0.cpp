// roc 2009-06 007402f0  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007402f0
//
// 007402f0  c701fc448f00         mov dword ptr [ecx], 0x8f44fc
// 007402f6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007402f9  85c9                 test ecx, ecx
// 007402fb  7407                 je 0x740304
// 007402fd  51                   push ecx
// 007402fe  e8db89fdff           call 0x718cde
// 00740303  59                   pop ecx
// 00740304  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007402f0(void*);
struct S_func_007402f0 {
    virtual ~S_func_007402f0();
    void* m_p;
};
S_func_007402f0::~S_func_007402f0()
{
    if (m_p)
        G1_func_007402f0(m_p);
}
