// from server: 80% by atomic.potato
extern "C" void sub_0097cd7e(void);
extern "C" void __fastcall sub_00803250(void*, int);

struct S
{
    int value0;
    char pad[0x1c];
    int value20[9];
    S* f();
};

S* S::f()
{
    sub_0097cd7e();
    sub_00803250((char*)this + 0x20, 10);
    *(int*)this = 0x00a6028c;
    *(int*)((char*)this + 0x3c) = 0;
    *(int*)((char*)this + 0x40) = 0;
    *(int*)((char*)this + 0x44) = 1;
    return this;
}
