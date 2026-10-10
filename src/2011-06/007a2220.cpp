// from server: 97% by atomic.potato
struct S
{
    int pad0[4];
    int count;
    int pad1[2];
    S** items;
    int pad2[4];
    int value;
    void f(int);
};

void S::f(int value)
{
    int i = 0;
    this->value = value;
    if (count > 0)
    {
        do
        {
            items[i]->f(value);
            ++i;
        } while (i < count);
    }
}
