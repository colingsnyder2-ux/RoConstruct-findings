// roc 2011-06 0081ab50  unit: CXTPCommandBar  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ab50
//
// 0081ab50  56                   push esi
// 0081ab51  8bf1                 mov esi, ecx
// 0081ab53  8b8664010000         mov eax, dword ptr [esi + 0x164]
// 0081ab59  85c0                 test eax, eax
// 0081ab5b  7538                 jne 0x81ab95
// 0081ab5d  e82effffff           call 0x81aa90
// 0081ab62  85c0                 test eax, eax
// 0081ab64  7408                 je 0x81ab6e
// 0081ab66  8bc8                 mov ecx, eax
// 0081ab68  5e                   pop esi
// 0081ab69  e9c2f60000           jmp 0x82a230
// 0081ab6e  8bce                 mov ecx, esi
// 0081ab70  e8ebfeffff           call 0x81aa60
// 0081ab75  8b8064010000         mov eax, dword ptr [eax + 0x164]
// 0081ab7b  85c0                 test eax, eax
// 0081ab7d  7516                 jne 0x81ab95
// 0081ab7f  39059881d100         cmp dword ptr [0xd18198], eax
// 0081ab85  7509                 jne 0x81ab90
// 0081ab87  50                   push eax
// 0081ab88  e8f359ffff           call 0x810580
// 0081ab8d  83c404               add esp, 4
// 0081ab90  a19881d100           mov eax, dword ptr [0xd18198]
// 0081ab95  5e                   pop esi
// 0081ab96  c3                   ret 
// copied from an identical function in another client (function ?getSomething@CXTPCommandBar@ns_ROCX000000@ns_ROCX00002c@@QAEHXZ)

namespace ns_ROCX000000 {
extern "C" void __cdecl G1_func_006a31b0(void*);
struct S_func_006a31b0 {
    virtual ~S_func_006a31b0();
    void* m_p;
};
S_func_006a31b0::~S_func_006a31b0()
{
    if (m_p)
        G1_func_006a31b0(m_p);
}
}
