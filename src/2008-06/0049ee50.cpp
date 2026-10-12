// from server: 43% by atomic.potato
struct S {
    char pad0[0x14];
    int field14;
    char pad1[0x28];
    char field40;
    char pad2[7];
    char field48;
    char pad3[7];
    char field50;
    char pad4[7];
    char field58;

    int __thiscall f(int a, int b, int c, int d);
};

extern "C" int __cdecl sub_594a50();
extern "C" int __cdecl sub_56cdf0(void*);
extern "C" int __cdecl sub_56cbc0(void*);
extern "C" int __cdecl sub_553f90(int, int, int);
extern "C" int __cdecl sub_594b40(int, int);

int __thiscall S::f(int a, int b, int c, int d)
{
    int* p = &this->field14;
    *p = sub_594a50();
    int r1 = sub_56cdf0(&this->field40);
    int r2 = sub_553f90(a, -1, r1);
    sub_594b40(*p, r2);
    int r3 = sub_56cbc0(&this->field48);
    int r4 = sub_553f90(b, -1, r3);
    sub_594b40(*p, r4);
    int r5 = sub_56cbc0(&this->field50);
    int r6 = sub_553f90(c, -1, r5);
    sub_594b40(*p, r6);
    int r7 = sub_56cbc0(&this->field58);
    int r8 = sub_553f90(d, -1, r7);
    sub_594b40(*p, r8);
    return 0;
}
