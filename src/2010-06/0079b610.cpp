// from server: 62% by atomic.potato
struct S
{
    double value;
    char flag;
};

void __stdcall f(S* a, const double* b, const double* c)
{
    a->flag = 0;
    a->value = (*b) * (*c);
}
