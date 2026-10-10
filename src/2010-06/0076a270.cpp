// from server: 69% by atomic.potato
struct S
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
};

void __stdcall f(S* p, int x, int y)
{
    p->b = 0;
    p->c = 0;
    p->e = x;
    p->d = 3;
    p->f = y;
    p->g = -1;
}
