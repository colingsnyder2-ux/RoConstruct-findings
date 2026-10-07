// roc 2011-06 0087db30  unit: CXTPWinThemeWrapper  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087db30
//
// 0087db30  c7014cedac00         mov dword ptr [ecx], 0xaced4c
// 0087db36  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087db39  85c9                 test ecx, ecx
// 0087db3b  7407                 je 0x87db44
// 0087db3d  51                   push ecx
// 0087db3e  e8c1c7f8ff           call 0x80a304
// 0087db43  59                   pop ecx
// 0087db44  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0087db30(void*);
struct S_func_0087db30 {
    virtual ~S_func_0087db30();
    void* m_p;
};
S_func_0087db30::~S_func_0087db30()
{
    if (m_p)
        G1_func_0087db30(m_p);
}
