// roc 2008-06 0077e3d0  unit: CXTPTabPaintManager  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077e3d0
//
// 0077e3d0  c7019c968600         mov dword ptr [ecx], 0x86969c
// 0077e3d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077e3d9  85c9                 test ecx, ecx
// 0077e3db  7407                 je 0x77e3e4
// 0077e3dd  51                   push ecx
// 0077e3de  e86725f2ff           call 0x6a094a
// 0077e3e3  59                   pop ecx
// 0077e3e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0077e3d0(void*);
struct S_func_0077e3d0 {
    virtual ~S_func_0077e3d0();
    void* m_p;
};
S_func_0077e3d0::~S_func_0077e3d0()
{
    if (m_p)
        G1_func_0077e3d0(m_p);
}
