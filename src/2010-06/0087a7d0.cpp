// roc 2010-06 0087a7d0  unit: CXTPPropertyGridInplaceButton  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a7d0
//
// 0087a7d0  c70100dea600         mov dword ptr [ecx], 0xa6de00
// 0087a7d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0087a7d9  85c9                 test ecx, ecx
// 0087a7db  7407                 je 0x87a7e4
// 0087a7dd  51                   push ecx
// 0087a7de  e863d4f2ff           call 0x7a7c46
// 0087a7e3  59                   pop ecx
// 0087a7e4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0087a7d0(void*);
struct S_func_0087a7d0 {
    virtual ~S_func_0087a7d0();
    void* m_p;
};
S_func_0087a7d0::~S_func_0087a7d0()
{
    if (m_p)
        G1_func_0087a7d0(m_p);
}
