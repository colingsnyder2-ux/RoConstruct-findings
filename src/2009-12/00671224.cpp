// from server: 94% by atomic.potato
struct S
{
    int f();
};

extern "C" int __stdcall target(int, int);

int S::f()
{
    return target(0, 0);
}
