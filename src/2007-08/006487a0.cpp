// from server: 80% by colin
// roc 2007-08 006487a0  unit: CXTPCommandBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006487a0
//
// 006487a0  8bd1                 mov edx, ecx
// 006487a2  8d8a90000000         lea ecx, [edx + 0x90]
// 006487a8  e853feffff           call 0x648600
// 006487ad  85c0                 test eax, eax
// 006487af  7506                 jne 0x6487b7
// 006487b1  b801000000           mov eax, 1
// 006487b6  c3                   ret 
// 006487b7  8d8aa0000000         lea ecx, [edx + 0xa0]
// 006487bd  e83efeffff           call 0x648600
// 006487c2  f7d8                 neg eax
// 006487c4  1bc0                 sbb eax, eax
// 006487c6  83c001               add eax, 1
// 006487c9  c3                   ret 

struct CXTPCommandBar {
    char pad[0x90];
    int field_90;
    char pad2[0x0c];
    int field_a0;

    int sub_6487a0();
};

extern "C" int __fastcall sub_648600(int* p);

int CXTPCommandBar::sub_6487a0() {
    int r = sub_648600(&field_90);
    if (r == 0)
        return 1;
    r = sub_648600(&field_a0);
    return (r != 0) ? 0 : 1;
}
