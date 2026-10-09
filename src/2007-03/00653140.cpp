// roc 2007-03 00653140  unit: seg_00650000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00653140
//
// 00653140  8b442404             mov eax, dword ptr [esp + 4]
// 00653144  6a10                 push 0x10
// 00653146  50                   push eax
// 00653147  e884eeffff           call 0x651fd0
// 0065314c  83e010               and eax, 0x10
// 0065314f  c20400               ret 4
// copied from an identical function in another client (function ?GetItemState@CRobloxTreeCtrl@ns_ROCX000024@@QBEHH@Z)

namespace ns_ROCX000024 {
struct CRobloxTreeCtrl {
    int GetItemState(int item) const;
};

extern "C" int __stdcall sub_665F90(int item, int mask);

int CRobloxTreeCtrl::GetItemState(int item) const {
    return sub_665F90(item, 0x10) & 0x10;
}
}
