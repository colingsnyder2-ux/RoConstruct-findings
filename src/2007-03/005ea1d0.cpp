// from server: 72% by colin
// roc 2007-03 005ea1d0  unit: seg_005e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea1d0
//
// 005ea1d0  8b4104               mov eax, dword ptr [ecx + 4]
// 005ea1d3  8b5004               mov edx, dword ptr [eax + 4]
// 005ea1d6  895104               mov dword ptr [ecx + 4], edx
// 005ea1d9  c3                   ret 

struct S {
    char pad0[4];
    int m_x;
    int f();
};

int S::f() {
    int* ptr = *(int**)(this + 4);
    int value = *(ptr + 1);
    *(int*)(this + 4) = value;
    return 0;
}
