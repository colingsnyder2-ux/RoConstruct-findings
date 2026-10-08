// from server: 100% by colin
// roc 2007-08 00667100  unit: CRobloxTreeCtrl  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00667100
//
// 00667100  8b442404             mov eax, dword ptr [esp + 4]
// 00667104  6a10                 push 0x10
// 00667106  50                   push eax
// 00667107  e884eeffff           call 0x665f90
// 0066710c  83e010               and eax, 0x10
// 0066710f  c20400               ret 4

struct CRobloxTreeCtrl {
    int GetItemState(int item) const;
};

extern "C" int __stdcall sub_665F90(int item, int mask);

int CRobloxTreeCtrl::GetItemState(int item) const {
    return sub_665F90(item, 0x10) & 0x10;
}
