// from server: 80% by king_originala
struct Argument
{
    void *value;
    Argument(void *);
};

struct Operation
{
    void apply(bool, void *, Argument *, int);
};

struct S
{
    unsigned int reserved;
    Operation operation;
    void f(void *);
};

#pragma optimize("", off)
void S::f(void *value)
{
    Argument argument(value);
    bool flag = false;
    operation.apply(flag, this, &argument, 0);
}
#pragma optimize("", on)
