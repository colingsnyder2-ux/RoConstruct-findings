// from server: 52% by colin
// roc 2007-03 005a80e0  unit: seg_005a0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a80e0
//
// 005a80e0  833900               cmp dword ptr [ecx], 0
// 005a80e3  0f95c0               setne al
// 005a80e6  c3                   ret 

struct S {
    int field;
};

extern "C" __declspec(dllimport) void G1_func_0062e440();

int S_f(S* thisPtr) {
    return *(int*)thisPtr != 0;
}
