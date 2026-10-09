// roc 2007-03 0065e580  unit: seg_00650000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065e580
//
// 0065e580  8b442404             mov eax, dword ptr [esp + 4]
// 0065e584  398168010000         cmp dword ptr [ecx + 0x168], eax
// 0065e58a  7413                 je 0x65e59f
// 0065e58c  898168010000         mov dword ptr [ecx + 0x168], eax
// 0065e592  c744240401000000     mov dword ptr [esp + 4], 1
// 0065e59a  e91116fdff           jmp 0x62fbb0
// 0065e59f  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@CXTPControlColorSelector@ns_ROCX000019@@QAEXH@Z)

namespace ns_ROCX000019 {
struct CXTPControlColorSelector {
    char pad[0x168];
    int m_nValue;
    void SetValue(int nValue);
};

extern "C" void __stdcall sub_63a690(int);

void CXTPControlColorSelector::SetValue(int nValue) {
    if (m_nValue != nValue) {
        m_nValue = nValue;
        sub_63a690(1);
    }
}
}
