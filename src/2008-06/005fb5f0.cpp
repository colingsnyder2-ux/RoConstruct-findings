// from server: 68% by colin
struct Kernel {
    char pad0[4];
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
    Kernel();
};

Kernel::Kernel()
{
    f4 = 0;
    f8 = 0;
    *(int*)this = 0;
    f10 = 0;
    f14 = 0;
    fc = 0;
    f1c = 0;
    f20 = 0;
    f18 = 0;
    f28 = 0;
    f2c = 0;
    f24 = 0;
    f34 = 0;
    f38 = 0;
    f30 = 0;
}
