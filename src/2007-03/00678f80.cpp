// from server: 66% by colin
// roc 2007-03 00678f80  unit: seg_00670000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00678f80
//
// 00678f80  33c0                 xor eax, eax
// 00678f82  394130               cmp dword ptr [ecx + 0x30], eax
// 00678f85  0f94c0               sete al
// 00678f88  c3                   ret 

struct S {
    int field_30;
};

extern "C" __declspec(dllimport) void func_00678f80();

int S_f(S* thisPtr) {
    return thisPtr->field_30 == 0;
}
