// from server: 40% by atomic.potato
struct S
{
    int __cdecl f(int);
};

void sub_0095e6f0(S*, int);

int S::f(int value)
{
    sub_0095e6f0(this, value);
    return (int)this;
}
