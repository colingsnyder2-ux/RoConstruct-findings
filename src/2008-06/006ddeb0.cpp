// roc 2008-06 006ddeb0  unit: CRobloxTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddeb0
//
// 006ddeb0  8b442404             mov eax, dword ptr [esp + 4]
// 006ddeb4  6a10                 push 0x10
// 006ddeb6  50                   push eax
// 006ddeb7  e874eeffff           call 0x6dcd30
// 006ddebc  83e010               and eax, 0x10
// 006ddebf  c20400               ret 4
// copied from an identical function in another client (function ?GetItemState@CRobloxTreeCtrl@ns_ROCX000010@@QBEHH@Z)

namespace ns_ROCX000010 {
struct CRobloxTreeCtrl {
    int GetItemState(int item) const;
};

extern "C" int __stdcall sub_665F90(int item, int mask);

int CRobloxTreeCtrl::GetItemState(int item) const {
    return sub_665F90(item, 0x10) & 0x10;
}
}
