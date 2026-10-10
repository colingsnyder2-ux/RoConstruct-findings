// from server: 57% by atomic.potato
extern "C" void sub_00a99584(void *);
extern "C" void sub_00a72c70(void *);

struct S
{
    int value;
    char pad[28];
    int field34;
    int field38;
    S();
};

S::S()
{
    sub_00a99584(this);
    value = 0xc26f1c;
    sub_00a72c70((char *)this + 32);
    field34 = 0;
    field38 = 0;
}
