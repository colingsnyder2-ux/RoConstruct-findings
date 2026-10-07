// roc 2010-06 00823010  unit: CXTPResourceManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00823010
//
// 00823010  c701504ea600         mov dword ptr [ecx], 0xa64e50
// 00823016  8b4904               mov ecx, dword ptr [ecx + 4]
// 00823019  85c9                 test ecx, ecx
// 0082301b  7407                 je 0x823024
// 0082301d  51                   push ecx
// 0082301e  e8234cf8ff           call 0x7a7c46
// 00823023  59                   pop ecx
// 00823024  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00823010(void*);
struct S_func_00823010 {
    virtual ~S_func_00823010();
    void* m_p;
};
S_func_00823010::~S_func_00823010()
{
    if (m_p)
        G1_func_00823010(m_p);
}
