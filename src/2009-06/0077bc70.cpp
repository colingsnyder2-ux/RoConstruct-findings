// roc 2009-06 0077bc70  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077bc70
//
// 0077bc70  c7019cc78f00         mov dword ptr [ecx], 0x8fc79c
// 0077bc76  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077bc79  85c9                 test ecx, ecx
// 0077bc7b  7407                 je 0x77bc84
// 0077bc7d  51                   push ecx
// 0077bc7e  e85bd0f9ff           call 0x718cde
// 0077bc83  59                   pop ecx
// 0077bc84  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0077bc70(void*);
struct S_func_0077bc70 {
    virtual ~S_func_0077bc70();
    void* m_p;
};
S_func_0077bc70::~S_func_0077bc70()
{
    if (m_p)
        G1_func_0077bc70(m_p);
}
