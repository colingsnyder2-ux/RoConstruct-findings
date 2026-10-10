// from server: 44% by colin
struct BodyColors {
    char pad[0xbc];
    int fieldBC;
    char pad2[0xe8 - 0xbc - 4];
    int fieldE8;
    int fieldEC;
    int fieldF0;
    int fieldF4;
    int fieldF8;
    int fieldFC;
    void applyByMyself(int humanoid);
};

struct Helper {
    int __thiscall f5A1A60();
    int __thiscall f5A19E0();
    int __thiscall f5A5B60();
    int __thiscall f5A5C60();
    int __thiscall f5A5D60();
    int __thiscall f5A5E60();
    int __thiscall f5A5F60();
    int __thiscall f5A6060();
    void __thiscall f5784B0(int);
};

void BodyColors::applyByMyself(int humanoid)
{
    Helper* h = (Helper*)this;
    if (h->f5A1A60() != 0)
        return;

    bool flag = h->f5A19E0() != 0;

    int r;
    r = h->f5A5B60();
    if (r != 0)
        h->f5784B0(fieldE8);

    r = h->f5A5D60();
    if (r != 0)
        h->f5784B0(fieldF8);

    r = h->f5A5E60();
    if (r != 0)
        h->f5784B0(fieldFC);

    if (flag)
        return;

    r = h->f5A5C60();
    if (r != 0)
        h->f5784B0(fieldF4);

    r = h->f5A5F60();
    if (r != 0)
        h->f5784B0(fieldEC);

    r = h->f5A6060();
    if (r != 0)
        h->f5784B0(fieldF0);
}
