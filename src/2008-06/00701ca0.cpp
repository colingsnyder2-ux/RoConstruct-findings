// roc 2008-06 00701ca0  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701ca0
//
// 00701ca0  c70134b78500         mov dword ptr [ecx], 0x85b734
// 00701ca6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00701ca9  85c9                 test ecx, ecx
// 00701cab  7407                 je 0x701cb4
// 00701cad  51                   push ecx
// 00701cae  e897ecf9ff           call 0x6a094a
// 00701cb3  59                   pop ecx
// 00701cb4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00701ca0(void*);
struct S_func_00701ca0 {
    virtual ~S_func_00701ca0();
    void* m_p;
};
S_func_00701ca0::~S_func_00701ca0()
{
    if (m_p)
        G1_func_00701ca0(m_p);
}
