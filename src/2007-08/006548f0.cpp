// roc 2007-08 006548f0  unit: CInstanceRecord::CNameItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006548f0
//
// 006548f0  c701987f7c00         mov dword ptr [ecx], 0x7c7f98
// 006548f6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006548f9  85c9                 test ecx, ecx
// 006548fb  7407                 je 0x654904
// 006548fd  51                   push ecx
// 006548fe  e823b6fdff           call 0x62ff26
// 00654903  59                   pop ecx
// 00654904  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006548f0(void*);
struct S_func_006548f0 {
    virtual ~S_func_006548f0();
    void* m_p;
};
S_func_006548f0::~S_func_006548f0()
{
    if (m_p)
        G1_func_006548f0(m_p);
}
