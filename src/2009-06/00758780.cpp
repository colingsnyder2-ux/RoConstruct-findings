// roc 2009-06 00758780  unit: CRobloxTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00758780
//
// 00758780  8b442404             mov eax, dword ptr [esp + 4]
// 00758784  6a10                 push 0x10
// 00758786  50                   push eax
// 00758787  e874eeffff           call 0x757600
// 0075878c  83e010               and eax, 0x10
// 0075878f  c20400               ret 4
// copied from an identical function in another client (function ?GetItemState@CRobloxTreeCtrl@ns_ROCX00000d@@QBEHH@Z)

namespace ns_ROCX00000d {
struct CRobloxTreeCtrl {
    int GetItemState(int item) const;
};

extern "C" int __stdcall sub_665F90(int item, int mask);

int CRobloxTreeCtrl::GetItemState(int item) const {
    return sub_665F90(item, 0x10) & 0x10;
}
}
