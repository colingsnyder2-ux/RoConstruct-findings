// from server: 100% by tester
// roc 2011-06 00426a60  unit: CRobloxTreeCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426a60
//
// 00426a60  33c0                 xor eax, eax
// 00426a62  3881d0000000         cmp byte ptr [ecx + 0xd0], al
// 00426a68  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00426a6c  0f95c0               setne al
// 00426a6f  8901                 mov dword ptr [ecx], eax
// 00426a71  c20800               ret 8

struct CSelectionTreeCtrl {
    char pad[0xd0];
    unsigned char flag;
    void getFlag(int, int* out);
};

void CSelectionTreeCtrl::getFlag(int, int* out) {
    *out = (this->flag != 0) ? 1 : 0;
}