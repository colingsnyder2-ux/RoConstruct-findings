// roc 2007-08 006c8fb0  unit: CXTPControlEditCtrl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8fb0
//
// 006c8fb0  c7014c787d00         mov dword ptr [ecx], 0x7d784c
// 006c8fb6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006c8fb9  85c9                 test ecx, ecx
// 006c8fbb  7407                 je 0x6c8fc4
// 006c8fbd  51                   push ecx
// 006c8fbe  e8636ff6ff           call 0x62ff26
// 006c8fc3  59                   pop ecx
// 006c8fc4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006c8fb0(void*);
struct S_func_006c8fb0 {
    virtual ~S_func_006c8fb0();
    void* m_p;
};
S_func_006c8fb0::~S_func_006c8fb0()
{
    if (m_p)
        G1_func_006c8fb0(m_p);
}
