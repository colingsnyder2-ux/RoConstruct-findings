// from server: 55% by atomic.potato
struct S
{
    int pad[26];
    int f();
};

int callee(S *, int);

int S::f()
{
    int n = (pad[27] - pad[26]) >> 6;
    if (n <= 0)
        return 0;
    return callee((S *)((char *)this + 0x5c), 0);
}
