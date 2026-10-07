// roc 2010-06 007ead80  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ead80
//
// 007ead80  c7014cc0a500         mov dword ptr [ecx], 0xa5c04c
// 007ead86  8b4904               mov ecx, dword ptr [ecx + 4]
// 007ead89  85c9                 test ecx, ecx
// 007ead8b  7407                 je 0x7ead94
// 007ead8d  51                   push ecx
// 007ead8e  e8b3cefbff           call 0x7a7c46
// 007ead93  59                   pop ecx
// 007ead94  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_007ead80(void*);
struct S_func_007ead80 {
    virtual ~S_func_007ead80();
    void* m_p;
};
S_func_007ead80::~S_func_007ead80()
{
    if (m_p)
        G1_func_007ead80(m_p);
}
