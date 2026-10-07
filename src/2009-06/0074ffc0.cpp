// roc 2009-06 0074ffc0  unit: CInstanceRecord  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ffc0
//
// 0074ffc0  c701cc548f00         mov dword ptr [ecx], 0x8f54cc
// 0074ffc6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0074ffc9  85c9                 test ecx, ecx
// 0074ffcb  7407                 je 0x74ffd4
// 0074ffcd  51                   push ecx
// 0074ffce  e80b8dfcff           call 0x718cde
// 0074ffd3  59                   pop ecx
// 0074ffd4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0074ffc0(void*);
struct S_func_0074ffc0 {
    virtual ~S_func_0074ffc0();
    void* m_p;
};
S_func_0074ffc0::~S_func_0074ffc0()
{
    if (m_p)
        G1_func_0074ffc0(m_p);
}
