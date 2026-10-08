// roc 2007-08 006dc670  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dc670
//
// 006dc670  c70124947d00         mov dword ptr [ecx], 0x7d9424
// 006dc676  8b4904               mov ecx, dword ptr [ecx + 4]
// 006dc679  85c9                 test ecx, ecx
// 006dc67b  7407                 je 0x6dc684
// 006dc67d  51                   push ecx
// 006dc67e  e8a338f5ff           call 0x62ff26
// 006dc683  59                   pop ecx
// 006dc684  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006dc670(void*);
struct S_func_006dc670 {
    virtual ~S_func_006dc670();
    void* m_p;
};
S_func_006dc670::~S_func_006dc670()
{
    if (m_p)
        G1_func_006dc670(m_p);
}
