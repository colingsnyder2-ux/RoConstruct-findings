// from server: 84% by atomic.potato
extern "C" void sub_009cc5ca(void);
extern "C" void sub_0086a900(void*, int);

struct S
{
    int value;
};

S* __fastcall func_0086a990(S* p, int)
{
    sub_009cc5ca();
    p->value = 0xacba2c;
    sub_0086a900((char*)p + 0x20, 10);
    *(int*)((char*)p + 0x3c) = 0;
    *(int*)((char*)p + 0x40) = 0;
    *(int*)((char*)p + 0x44) = 1;
    return p;
}
