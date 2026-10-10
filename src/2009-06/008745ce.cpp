// from server: 57% by atomic.potato
extern "C" void __cdecl sub_0071a57a(int);

struct seg_00870000
{
    void f(void *, void *);
};

void seg_00870000::f(void *, void *p)
{
    int v = *(int *)((char *)p - 4);
    sub_0071a57a(v ^ (int)p);
    *(int *)0x009b27f4 = *(int *)0x009b27f4;
}
