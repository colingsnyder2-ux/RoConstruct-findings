// roc 2009-06 007b4bb0  unit: CXTPShortcutManager::CKeyHelper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4bb0
//
// 007b4bb0  c701ec2f9000         mov dword ptr [ecx], 0x902fec
// 007b4bb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b4bb9  85c9                 test ecx, ecx
// 007b4bbb  7407                 je 0x7b4bc4
// 007b4bbd  51                   push ecx
// 007b4bbe  e81b41f6ff           call 0x718cde
// 007b4bc3  59                   pop ecx
// 007b4bc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007b4bb0(void*);
struct S_func_007b4bb0 {
    virtual ~S_func_007b4bb0();
    void* m_p;
};
S_func_007b4bb0::~S_func_007b4bb0()
{
    if (m_p)
        G1_func_007b4bb0(m_p);
}
