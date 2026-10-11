// from server: 61% by atomic.potato
struct S_func_005d8be0 {
    int f(int a);
};

int S_func_005d8be0::f(int a)
{
    int v = a + 1;
    if (v > 3)
        return -1;
    switch (v) {
    case 0:
        return 9;
    case 1:
        return 6;
    case 2:
        return 3;
    default:
        return -1;
    }
}
