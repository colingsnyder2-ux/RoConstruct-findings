// from server: 65% by atomic.potato
struct S
{
    int f(int);
};

extern "C" void call_802458(void *, const char *);
extern "C" void call_57e730(void *, void *);

int S::f(int value)
{
    char local[28];
    call_802458(local, "AttachCamera");
    call_57e730(this, local);
    *(int *)this = 0x830830;
    return (int)this;
}
