// roc 2011-06 0087a5d0  unit: CXTPPropertyGridItemConstraints  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a5d0
//
// 0087a5d0  c70170ddac00         mov dword ptr [ecx], 0xacdd70
// 0087a5d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087a5d9  85c9                 test ecx, ecx
// 0087a5db  7407                 je 0x87a5e4
// 0087a5dd  51                   push ecx
// 0087a5de  e821fdf8ff           call 0x80a304
// 0087a5e3  59                   pop ecx
// 0087a5e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0087a5d0(void*);
struct S_func_0087a5d0 {
    virtual ~S_func_0087a5d0();
    void* m_p;
};
S_func_0087a5d0::~S_func_0087a5d0()
{
    if (m_p)
        G1_func_0087a5d0(m_p);
}
