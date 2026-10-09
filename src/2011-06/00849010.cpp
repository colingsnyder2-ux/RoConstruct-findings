// roc 2011-06 00849010  unit: CRobloxTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849010
//
// 00849010  8b442404             mov eax, dword ptr [esp + 4]
// 00849014  6a10                 push 0x10
// 00849016  50                   push eax
// 00849017  e874eeffff           call 0x847e90
// 0084901c  83e010               and eax, 0x10
// 0084901f  c20400               ret 4
// copied from an identical function in another client (function ?GetItemState@CRobloxTreeCtrl@ns_ROCX000003@@QBEHH@Z)

namespace ns_ROCX000003 {
struct CRobloxTreeCtrl {
    int GetItemState(int item) const;
};

extern "C" int __stdcall sub_665F90(int item, int mask);

int CRobloxTreeCtrl::GetItemState(int item) const {
    return sub_665F90(item, 0x10) & 0x10;
}
}
