// from server: 40% by atomic.potato
struct S
{
    int value;
    int f();
};

extern "C" int __stdcall target(S*);

int S::f()
{
    if (value)
        return target(this);
    return 0;
}
