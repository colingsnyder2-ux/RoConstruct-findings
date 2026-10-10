// from server: 50% by atomic.potato
struct S
{
    int value;
    S* items;
    int count;
    int pad0;
    int pad1;
    int pad2;
    int pad3;
    int pad4;
    int pad5;
    int pad6;
    int pad7;
    int pad8;
    int pad9;
    int pad10;

    void __thiscall f(int value);
};

void __thiscall S::f(int value)
{
    int i = 0;
    int count = this->count;
    this->pad8 = value;

    if (count > 0)
    {
        do
        {
            this->items[i].f(value);
            ++i;
        } while (i < this->count);
    }
}
