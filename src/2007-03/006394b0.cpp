// from server: 88% by atomic.potato
// roc 2007-03 006394b0  unit: seg_00630000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006394b0
//
// 006394b0  8389e000000002       or dword ptr [ecx + 0xe0], 2
// 006394b7  c3                   ret 

struct S {
    int f();
};

int S::f() {
    *(unsigned int*)((char*)this + 0xe0) |= 2;
    return 0;
}
