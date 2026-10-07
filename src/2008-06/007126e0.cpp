// roc 2008-06 007126e0  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007126e0
//
// 007126e0  c70100d58500         mov dword ptr [ecx], 0x85d500
// 007126e6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007126e9  85c9                 test ecx, ecx
// 007126eb  7407                 je 0x7126f4
// 007126ed  51                   push ecx
// 007126ee  e857e2f8ff           call 0x6a094a
// 007126f3  59                   pop ecx
// 007126f4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007126e0(void*);
struct S_func_007126e0 {
    virtual ~S_func_007126e0();
    void* m_p;
};
S_func_007126e0::~S_func_007126e0()
{
    if (m_p)
        G1_func_007126e0(m_p);
}
