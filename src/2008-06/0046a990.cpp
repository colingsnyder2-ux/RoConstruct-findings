// from server: 100% by king_originala
// roc 2008-06 0046a990  unit: VCWorkspace::?$CComObject  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a990
//
// 0046a990  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0046a993  e8b8a90e00           call 0x555350
// 0046a998  c20800               ret 8

struct Target {
    int invoke();
};

struct S {
    char padding[16];
    Target* target;
    int invoke(int, int);
};

int S::invoke(int, int) {
    return target->invoke();
}
