// from server: 57% by atomic.potato
struct S
{
    int (__thiscall *g)(char *, int);
    int h;
    int f_value;
    int f(void *);
};

int S::f(void *p)
{
    S *q = (S *)this;
    char *a = p ? (char *)p - 20 : 0;
    int esi = q->f_value;
    return q->g(a + a[0x150 / 4] + esi + q->h, esi);
}
