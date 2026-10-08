// roc 2007-08 006a12e0  unit: CXTPDockBar  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a12e0
//
// 006a12e0  c701c4327d00         mov dword ptr [ecx], 0x7d32c4
// 006a12e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006a12e9  85c9                 test ecx, ecx
// 006a12eb  7407                 je 0x6a12f4
// 006a12ed  51                   push ecx
// 006a12ee  e833ecf8ff           call 0x62ff26
// 006a12f3  59                   pop ecx
// 006a12f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006a12e0(void*);
struct S_func_006a12e0 {
    virtual ~S_func_006a12e0();
    void* m_p;
};
S_func_006a12e0::~S_func_006a12e0()
{
    if (m_p)
        G1_func_006a12e0(m_p);
}
