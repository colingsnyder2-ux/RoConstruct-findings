// from server: 47% by colin
extern "C" {
    int __stdcall sub_54E710(int, int, int);
    int __stdcall sub_5506E0(int, int, int);
    int __stdcall sub_54B960(int);
    void __stdcall sub_77E518();
}

struct S {
    char pad[0x3c];
    char f3c;
    char pad2[0x4b];
    char f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    int f38;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    int f84;

    S* ctor(int, int, int);
};

S* S::ctor(int a, int b, int c) {
    sub_77E518();
    f3c = 0;
    f88 = 0;
    f8c = 0;
    f90 = 0;
    f94 = 0;
    f98 = 0;
    f9c = 0x10;
    f0 = 0x7a7c44;
    int t = sub_54E710(a, b, c);
    sub_5506E0(t, b, c);
    sub_54B960((int)&f0);
    return this;
}
