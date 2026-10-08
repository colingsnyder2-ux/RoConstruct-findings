// from server: 100% by colin
// roc 2007-08 0041f820  unit: CSelectionTreeCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f820
//
// 0041f820  33c0                 xor eax, eax
// 0041f822  3881c8000000         cmp byte ptr [ecx + 0xc8], al
// 0041f828  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041f82c  0f95c0               setne al
// 0041f82f  8901                 mov dword ptr [ecx], eax
// 0041f831  c20800               ret 8

struct CSelectionTreeCtrl {
    char pad[0xc8];
    unsigned char flag;
    void getFlag(int, int* out);
};

void CSelectionTreeCtrl::getFlag(int, int* out) {
    *out = (this->flag != 0) ? 1 : 0;
}
