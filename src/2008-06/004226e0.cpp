// from server: 100% by tester
// roc 2008-06 004226e0  unit: CSelectionTreeCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004226e0
//
// 004226e0  33c0                 xor eax, eax
// 004226e2  3881e0000000         cmp byte ptr [ecx + 0xe0], al
// 004226e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004226ec  0f95c0               setne al
// 004226ef  8901                 mov dword ptr [ecx], eax
// 004226f1  c20800               ret 8

struct CSelectionTreeCtrl {
    char pad[0xe0];
    unsigned char flag;
    void getFlag(int, int* out);
};

void CSelectionTreeCtrl::getFlag(int, int* out) {
    *out = (this->flag != 0) ? 1 : 0;
}