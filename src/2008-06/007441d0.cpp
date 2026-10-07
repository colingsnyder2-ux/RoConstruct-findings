// roc 2008-06 007441d0  unit: CXTPControlEditCtrl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007441d0
//
// 007441d0  c7011c3a8600         mov dword ptr [ecx], 0x863a1c
// 007441d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 007441d9  85c9                 test ecx, ecx
// 007441db  7407                 je 0x7441e4
// 007441dd  51                   push ecx
// 007441de  e867c7f5ff           call 0x6a094a
// 007441e3  59                   pop ecx
// 007441e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007441d0(void*);
struct S_func_007441d0 {
    virtual ~S_func_007441d0();
    void* m_p;
};
S_func_007441d0::~S_func_007441d0()
{
    if (m_p)
        G1_func_007441d0(m_p);
}
