// from server: 37% by atomic.potato
struct S
{
    int f();
};

extern "C" int __cdecl callee1(unsigned char *);
extern "C" int __cdecl callee2(unsigned char *, int);

int S::f()
{
    unsigned char a;
    unsigned char b;
    callee2(&b, callee1(&a));
    return (int)this;
}
