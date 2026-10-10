// from server: 60% by atomic.potato
extern "C" void __cdecl sub_0071a57a(int);

struct S
{
};

void * __cdecl f(void *, void *arg)
{
    int value = *(int *)((char *)arg - 4) ^ (int)arg;
    sub_0071a57a(value);
    return (void *)0x009b5bd0;
}
