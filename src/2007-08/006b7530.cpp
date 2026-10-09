// from server: 64% by colin
// roc 2007-08 006b7530  unit: CXTPControlGallery  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7530
//
// 006b7530  83ec08               sub esp, 8
// 006b7533  e848c0ffff           call 0x6b3580
// 006b7538  85c0                 test eax, eax
// 006b753a  7506                 jne 0x6b7542
// 006b753c  83c408               add esp, 8
// 006b753f  c21000               ret 0x10
// 006b7542  66837c241000         cmp word ptr [esp + 0x10], 0
// 006b7548  8b5020               mov edx, dword ptr [eax + 0x20]
// 006b754b  8b4024               mov eax, dword ptr [eax + 0x24]
// 006b754e  891424               mov dword ptr [esp], edx
// 006b7551  7d05                 jge 0x6b7558
// 006b7553  8d1440               lea edx, [eax + eax*2]
// 006b7556  eb0b                 jmp 0x6b7563
// 006b7558  8d148500000000       lea edx, [eax*4]
// 006b755f  2bd0                 sub edx, eax
// 006b7561  f7da                 neg edx
// 006b7563  8b81f0010000         mov eax, dword ptr [ecx + 0x1f0]
// 006b7569  03c2                 add eax, edx
// 006b756b  50                   push eax
// 006b756c  e8fff2ffff           call 0x6b6870
// 006b7571  b801000000           mov eax, 1
// 006b7576  83c408               add esp, 8
// 006b7579  c21000               ret 0x10

struct CXTPControlGallery {
    char pad[0x1f0];
    int field_1f0;
    int method_6b7530(short, int, int, int);
};

extern "C" void* __cdecl sub_6b3580();
extern "C" void __cdecl sub_6b6870(int);

int CXTPControlGallery::method_6b7530(short a1, int a2, int a3, int a4)
{
    void* p = sub_6b3580();
    if (p != 0)
        return 0;

    int edx = *(int*)((char*)p + 0x20);
    int eax = *(int*)((char*)p + 0x24);

    if (a1 < 0)
        edx = eax + eax * 2;
    else
        edx = -(eax * 4 - eax);

    int v = this->field_1f0 + edx;
    sub_6b6870(v);
    return 1;
}
