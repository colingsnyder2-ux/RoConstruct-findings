// roc 2008-06 00701c60  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701c60
//
// 00701c60  c7011cb78500         mov dword ptr [ecx], 0x85b71c
// 00701c66  8b4904               mov ecx, dword ptr [ecx + 4]
// 00701c69  85c9                 test ecx, ecx
// 00701c6b  7407                 je 0x701c74
// 00701c6d  51                   push ecx
// 00701c6e  e8d7ecf9ff           call 0x6a094a
// 00701c73  59                   pop ecx
// 00701c74  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00701c60(void*);
struct S_func_00701c60 {
    virtual ~S_func_00701c60();
    void* m_p;
};
S_func_00701c60::~S_func_00701c60()
{
    if (m_p)
        G1_func_00701c60(m_p);
}
