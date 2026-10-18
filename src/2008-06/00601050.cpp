// from server: 68% by colin
struct S {
    int f(int, int, float, float);
};

void sub_5CF6D0(void*);

int S::f(int a, int b, float c, float d)
{
    sub_5CF6D0(this);
    *(int*)((char*)this + 0x15c) = a;
    *(int*)this = 0x84213c;
    *(int*)((char*)this + 0x10) = 0x84212c;
    *(int*)((char*)this + 0x14) = 0x842124;
    *(int*)((char*)this + 0x20) = 0x84211c;
    *(int*)((char*)this + 0x24) = 0x84210c;
    *(int*)((char*)this + 0x44) = 0x8420fc;
    *(int*)((char*)this + 0x64) = 0x8420ec;
    *(int*)((char*)this + 0x84) = 0x8420dc;
    *(int*)((char*)this + 0xa4) = 0x8420cc;
    *(int*)((char*)this + 0xc4) = 0x8420bc;
    *(int*)((char*)this + 0x130) = 0x8420b4;
    *(int*)((char*)this + 0x160) = b;
    *(float*)((char*)this + 0x164) = c;
    *(float*)((char*)this + 0x168) = d;
    return (int)this;
}
