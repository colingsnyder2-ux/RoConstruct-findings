// from server: 83% by atomic.potato
extern "C" void __stdcall G1_func_0040C080();

struct S
{
    int padding[41];
    int value;
    int f(int);
};

int S::f(int value)
{
    if (value == this->value)
        return 0;

    this->value = value;
    G1_func_0040C080();
    return 0;
}
