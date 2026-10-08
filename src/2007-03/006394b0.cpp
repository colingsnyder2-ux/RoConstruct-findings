// from server: 42% by colinlaptop
// roc 2007-03 006394b0  unit: seg_00630000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006394b0
//
// 006394b0  8389e000000002       or dword ptr [ecx + 0xe0], 2
// 006394b7  c3                   ret 

extern "C" __declspec(dllimport) void __stdcall SomeFunction();

struct S {
    int e0;
    int f();
};

int S::f() {
    this->e0 |= 2;
    return 0;
}
