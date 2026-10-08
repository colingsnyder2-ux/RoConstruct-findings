// from server: 70% by colin
// roc 2007-03 00698070  unit: seg_00690000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698070
//
// 00698070  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00698073  f7d8                 neg eax
// 00698075  1bc0                 sbb eax, eax
// 00698077  c3                   ret 

struct S {
    int f();
};

int S::f() {
    int value = *(int*)((char*)this + 0x2c);
    value = -value;
    value = value >> 31;
    return value;
}
