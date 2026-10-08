// from server: 100% by colin
// roc 2007-08 00684e40  unit: CXTPPropExchange  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684e40
//
// 00684e40  b801000000           mov eax, 1
// 00684e45  894134               mov dword ptr [ecx + 0x34], eax
// 00684e48  c3                   ret 

struct S {
    int pad[13];
    int value;
    int f();
};

int S::f() {
    value = 1;
    return 1;
}
