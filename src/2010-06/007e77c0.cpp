// roc 2010-06 007e77c0  unit: CRobloxTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e77c0
//
// 007e77c0  8b442404             mov eax, dword ptr [esp + 4]
// 007e77c4  6a10                 push 0x10
// 007e77c6  50                   push eax
// 007e77c7  e874eeffff           call 0x7e6640
// 007e77cc  83e010               and eax, 0x10
// 007e77cf  c20400               ret 4
// copied from an identical function in another client (function ?GetItemState@CRobloxTreeCtrl@ns_ROCX000017@@QBEHH@Z)

namespace ns_ROCX000017 {
struct CRobloxTreeCtrl {
    int GetItemState(int item) const;
};

extern "C" int __stdcall sub_665F90(int item, int mask);

int CRobloxTreeCtrl::GetItemState(int item) const {
    return sub_665F90(item, 0x10) & 0x10;
}
}
