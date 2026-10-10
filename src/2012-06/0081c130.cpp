// from server: 82% by atomic.potato
struct S_func_0081c130
{
    int value;
    bool f(bool);
};

bool S_func_0081c130::f(bool half)
{
    int v = value;

    if (half)
    {
        if (v > 1)
        {
            value = v / 2;
            return true;
        }
        return false;
    }

    if (v >= 16)
        return false;

    value = v + v;
    return true;
}
