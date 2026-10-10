// from server: 35% by atomic.potato
struct S
{
    struct Value
    {
        int a;
        int b;
        int c;
        int d;
    };

    int *data;
    int index;

    void f(Value *out);
};

void S::f(Value *out)
{
    Value *value = (Value *)((char *)data + (index << 4));
    *out = *value;
}
