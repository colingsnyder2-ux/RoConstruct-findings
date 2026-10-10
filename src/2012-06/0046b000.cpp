// from server: 73% by atomic.potato
struct S
{
    int value;
    int pad[39];
    int mode;
    int pad2[16];
    int f(int);
};

extern void G1_func_00414500();

int S::f(int value)
{
    if (mode == value)
        return 0;
    mode = value;
    G1_func_00414500();
    return 0;
}
