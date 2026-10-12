// from server: 90% by king_originala
struct Link {
    char reserved0[0x14];
    Link* parent;
    char reserved1[0x10];
    char* flag28;
    char* flag2c;
    char reserved2[0x5c];
    float value;

    __declspec(noinline) void reset();
    void setValue(float v);
};

void Link::reset()
{
    if (flag28 && flag28[4])
        return;

    if (parent)
        parent->reset();
    else if (flag2c)
        flag2c[8] = 1;

    if (flag28)
        flag28[4] = 1;
}

void Link::setValue(float v)
{
    if (v != value) {
        if (!flag28 || !flag28[4]) {
            if (parent)
                parent->reset();
            else if (flag2c)
                flag2c[8] = 1;

            if (flag28)
                flag28[4] = 1;
        }
        value = v;
    }
}
