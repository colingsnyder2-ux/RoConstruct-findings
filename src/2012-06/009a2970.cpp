// from server: 69% by atomic.potato
struct S_009a2970;

void Call_00a99584(S_009a2970 *);
void Call_009a28d0(void *);

struct S_009a2970
{
    int f(int);
};

int S_009a2970::f(int value)
{
    Call_00a99584(this);
    Call_009a28d0((char *)this + 0x24);
    *(int *)((char *)this + 0x20) = value;
    *(int *)this = 0x00c0f3cc;
    return (int)this;
}
