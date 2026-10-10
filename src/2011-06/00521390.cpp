// from server: 95% by atomic.potato
struct S
{
    unsigned int *data;
    unsigned int count;
    void f(unsigned int index);
};

void __thiscall S::f(unsigned int index)
{
    if (index >= count)
        return;

    if (index >= count - 1)
        return;

    do
    {
        data[index] = data[index + 1];
        ++index;
    } while (index < count - 1);

    --count;
}
