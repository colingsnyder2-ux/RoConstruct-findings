// roc 2008-06 00759450  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00759450
//
// 00759450  c70184568600         mov dword ptr [ecx], 0x865684
// 00759456  8b4904               mov ecx, dword ptr [ecx + 4]
// 00759459  85c9                 test ecx, ecx
// 0075945b  7407                 je 0x759464
// 0075945d  51                   push ecx
// 0075945e  e8e774f4ff           call 0x6a094a
// 00759463  59                   pop ecx
// 00759464  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00759450(void*);
struct S_func_00759450 {
    virtual ~S_func_00759450();
    void* m_p;
};
S_func_00759450::~S_func_00759450()
{
    if (m_p)
        G1_func_00759450(m_p);
}
