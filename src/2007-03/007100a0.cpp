// from server: 57% by colin
// roc 2007-03 007100a0  unit: seg_00710000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007100a0
//
// 007100a0  8b01                 mov eax, dword ptr [ecx]
// 007100a2  8b5070               mov edx, dword ptr [eax + 0x70]
// 007100a5  6a01                 push 1
// 007100a7  ffd2                 call edx
// 007100a9  c3                   ret 

struct S {
    int* vtable;
};

extern "C" __declspec(dllimport) void __stdcall func_007100a0(int);

int S_f(S* this_ptr) {
    int* vtable = this_ptr->vtable;
    int* func_ptr = (int*)(vtable[0x1C / 4]);
    func_007100a0(1);
    return 0;
}
