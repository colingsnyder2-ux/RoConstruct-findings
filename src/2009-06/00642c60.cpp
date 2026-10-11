// from server: 77% by atomic.potato
extern "C" int __cdecl sub_642720(int, int);

struct S {
    int __cdecl f(int a, int b, int c);
};

int S::f(int a, int b, int c)
{
    char buf[4];
    buf[0] = (char)a;
    buf[1] = (char)b;
    buf[2] = (char)c;
    buf[3] = 0;
    int v = *(int*)buf;
    sub_642720(v, (int)this);
    return (int)this;
}
