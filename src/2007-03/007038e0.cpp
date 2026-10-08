// from server: 66% by colin
// roc 2007-03 007038e0  unit: seg_00700000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007038e0
//
// 007038e0  33c0                 xor eax, eax
// 007038e2  394138               cmp dword ptr [ecx + 0x38], eax
// 007038e5  0f95c0               setne al
// 007038e8  c3                   ret 

struct S {
    int field_38;
};

extern "C" __declspec(dllimport) void* some_imported_function();

int S_f(S* this_ptr) {
    return this_ptr->field_38 != 0;
}
