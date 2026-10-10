// from server: 62% by atomic.potato
struct S
{
    int f();
    int value50;
    int value64;
};

extern "C" int G1_func_0085a7e0(int, int);
extern "C" void G1_func_0080fb80(int);

int S::f()
{
    int value = value64;
    if (value == -1)
        return 0;
    G1_func_0080fb80(G1_func_0085a7e0(value, 0));
    return 0;
}
