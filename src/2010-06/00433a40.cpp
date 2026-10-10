// from server: 75% by atomic.potato
struct VBrickColor
{
    int x0;
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    int x6;
    int x7;
    int x8;
    int x9;
    int x10;
    int x11;
    int x12;
    int x13;
    int x14;
    int x15;
    int x16;
    int x17;
    int x18;
    int x19;
    int x20;
    int x21;
    int x22;
    int x23;
    int x24;
    int x25;
    int x26;
    int x27;
    int x28;
    int x29;
    int x30;
    int x31;
    int x32;
    int x33;
    int x34;
    VBrickColor *f(int);
};

extern "C" void __stdcall sub_9ecec4(int *, int *);

VBrickColor *VBrickColor::f(int value)
{
    int zero = 0;
    sub_9ecec4((int *)((char *)this + 0xa4), &zero);
    return this;
}
