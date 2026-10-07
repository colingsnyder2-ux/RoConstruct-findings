// roc 2010-06 00860970  unit: CXTPDockingPaneWindowSelect  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00860970
//
// 00860970  c70114aea600         mov dword ptr [ecx], 0xa6ae14
// 00860976  8b4904               mov ecx, dword ptr [ecx + 4]
// 00860979  85c9                 test ecx, ecx
// 0086097b  7407                 je 0x860984
// 0086097d  51                   push ecx
// 0086097e  e8c372f4ff           call 0x7a7c46
// 00860983  59                   pop ecx
// 00860984  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00860970(void*);
struct S_func_00860970 {
    virtual ~S_func_00860970();
    void* m_p;
};
S_func_00860970::~S_func_00860970()
{
    if (m_p)
        G1_func_00860970(m_p);
}
