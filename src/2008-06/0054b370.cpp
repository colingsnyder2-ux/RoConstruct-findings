// from server: 37% by atomic.potato
extern "C" int __cdecl sub_54e310(int *);
extern "C" void __cdecl sub_54c650(unsigned char *, int);

struct S
{
    int f();
};

int S::f()
{
    unsigned char a;
    unsigned char b;
    sub_54c650(&b, sub_54e310((int *)&a));
    return (int)this;
}
