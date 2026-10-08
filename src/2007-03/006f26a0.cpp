// from server: 66% by colin
// roc 2007-03 006f26a0  unit: seg_006f0000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f26a0
//
// 006f26a0  33c0                 xor eax, eax
// 006f26a2  394108               cmp dword ptr [ecx + 8], eax
// 006f26a5  0f95c0               setne al
// 006f26a8  c3                   ret 

struct S {
    int field;
};

extern "C" __declspec(dllimport) void G1_func_006f26a0();

int S_f(S* thisPtr) {
    return thisPtr->field != 0;
}
