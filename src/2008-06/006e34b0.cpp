// roc 2008-06 006e34b0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e34b0
//
// 006e34b0  c70184688500         mov dword ptr [ecx], 0x856884
// 006e34b6  8b4904               mov ecx, dword ptr [ecx + 4]
// 006e34b9  85c9                 test ecx, ecx
// 006e34bb  7407                 je 0x6e34c4
// 006e34bd  51                   push ecx
// 006e34be  e887d4fbff           call 0x6a094a
// 006e34c3  59                   pop ecx
// 006e34c4  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_006e34b0(void*);
struct S_func_006e34b0 {
    virtual ~S_func_006e34b0();
    void* m_p;
};
S_func_006e34b0::~S_func_006e34b0()
{
    if (m_p)
        G1_func_006e34b0(m_p);
}
