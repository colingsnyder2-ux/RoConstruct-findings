// roc 2008-06 006ed3a0  unit: CXTPCustomizeCommandsPage  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ed3a0
//
// 006ed3a0  c70190868500         mov dword ptr [ecx], 0x858690
// 006ed3a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006ed3a9  85c9                 test ecx, ecx
// 006ed3ab  7407                 je 0x6ed3b4
// 006ed3ad  51                   push ecx
// 006ed3ae  e89735fbff           call 0x6a094a
// 006ed3b3  59                   pop ecx
// 006ed3b4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006ed3a0(void*);
struct S_func_006ed3a0 {
    virtual ~S_func_006ed3a0();
    void* m_p;
};
S_func_006ed3a0::~S_func_006ed3a0()
{
    if (m_p)
        G1_func_006ed3a0(m_p);
}
