// from server: 50% by colin
// roc 2007-03 005a2da0  unit: seg_005a0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2da0
//
// 005a2da0  8a8130010000         mov al, byte ptr [ecx + 0x130]
// 005a2da6  2401                 and al, 1
// 005a2da8  c3                   ret 

struct S {
    unsigned char data[0x130];
};

extern "C" __declspec(dllimport) void func_0049d080();

int S_f(S* thisPtr) {
    return (thisPtr->data[0x130] & 1) != 0;
}
