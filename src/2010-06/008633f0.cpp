// roc 2010-06 008633f0  unit: CXTPDockingPaneMiniWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008633f0
//
// 008633f0  c70180b3a600         mov dword ptr [ecx], 0xa6b380
// 008633f6  8b4904               mov ecx, dword ptr [ecx + 4]
// 008633f9  85c9                 test ecx, ecx
// 008633fb  7407                 je 0x863404
// 008633fd  51                   push ecx
// 008633fe  e84348f4ff           call 0x7a7c46
// 00863403  59                   pop ecx
// 00863404  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_008633f0(void*);
struct S_func_008633f0 {
    virtual ~S_func_008633f0();
    void* m_p;
};
S_func_008633f0::~S_func_008633f0()
{
    if (m_p)
        G1_func_008633f0(m_p);
}
