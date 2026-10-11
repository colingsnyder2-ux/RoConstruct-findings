// from server: 78% by atomic.potato
extern "C" int __stdcall sub_4675A0(void *, int);
extern "C" int __stdcall sub_76A190(void *, int *);

struct S
{
    int f(int);
};

int S::f(int x)
{
    int value = *(int *)sub_4675A0(this, x + 4);
    return sub_76A190(this, &value);
}
