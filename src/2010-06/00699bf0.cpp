// roc 2010-06 00699bf0  unit: RBX::PolyContact  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00699bf0
//
// 00699bf0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00699bf6  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00699bf9  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00699bff  c3                   ret 
// copied from an identical function in another client (function ?get@EventDescFunc_0071a050@ns_ROCX000012@@QAEHXZ)

namespace ns_ROCX000012 {
struct EventDescFunc_0071a050
{
    char pad0[208];
    void* m_p;
    int get();
};

int EventDescFunc_0071a050::get()
{
    char* p = (char*)m_p;
    p = *(char**)(p + 36);
    return *(int*)(p + 148);
}
}
