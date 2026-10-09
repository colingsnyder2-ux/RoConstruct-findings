// roc 2007-03 00421430  unit: seg_00420000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00421430
//
// 00421430  33c0                 xor eax, eax
// 00421432  3881c8000000         cmp byte ptr [ecx + 0xc8], al
// 00421438  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042143c  0f95c0               setne al
// 0042143f  8901                 mov dword ptr [ecx], eax
// 00421441  c20800               ret 8
// copied from an identical function in another client (function ?getFlag@CSelectionTreeCtrl@ns_ROCX000010@@QAEXHPAH@Z)

namespace ns_ROCX000010 {
struct CSelectionTreeCtrl {
    char pad[0xc8];
    unsigned char flag;
    void getFlag(int, int* out);
};

void CSelectionTreeCtrl::getFlag(int, int* out) {
    *out = (this->flag != 0) ? 1 : 0;
}
}
