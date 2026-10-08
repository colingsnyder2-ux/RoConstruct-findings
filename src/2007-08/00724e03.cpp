// from server: 40% by colin
// roc 2007-08 00724e03  unit: CXTIconHandle  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724e03
//
// 00724e03  6a03                 push 3
// 00724e05  58                   pop eax
// 00724e06  c3                   ret 

struct CXTIconHandle {
    int f();
};

int CXTIconHandle::f() {
    return 3;
}
