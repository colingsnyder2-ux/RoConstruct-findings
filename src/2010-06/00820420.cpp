// roc 2010-06 00820420  unit: CXTPWinThemeWrapper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820420
//
// 00820420  c701f842a600         mov dword ptr [ecx], 0xa642f8
// 00820426  8b4904               mov ecx, dword ptr [ecx + 4]
// 00820429  85c9                 test ecx, ecx
// 0082042b  7407                 je 0x820434
// 0082042d  51                   push ecx
// 0082042e  e81378f8ff           call 0x7a7c46
// 00820433  59                   pop ecx
// 00820434  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00820420(void*);
struct S_func_00820420 {
    virtual ~S_func_00820420();
    void* m_p;
};
S_func_00820420::~S_func_00820420()
{
    if (m_p)
        G1_func_00820420(m_p);
}
