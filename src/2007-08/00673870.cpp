// from server: 63% by colin
struct CXTPCustomizeSheet
{
    char pad_0000[0x28];
    int field_28;
    int field_2c;
    char pad_0030[0x54];
    int field_84;
    int field_88;
    int field_90;
    char pad_0094[0x64];
    int field_f8;
    char pad_00fc[0x5c];
    int field_158;

    int func_00673870(CXTPCustomizeSheet* p);
};

int CXTPCustomizeSheet::func_00673870(CXTPCustomizeSheet* p)
{
    if (p == 0)
        return 0;

    int v = p->field_f8;
    if (v != 1 && v != 2 && v != 3 && v != 4)
        return 0;

    int c = p->field_90;
    if (c == 0)
    {
        c = p->field_88;
        if (c <= 0)
        {
            int* q = (int*)p->field_158;
            if (q == 0)
            {
                int r = p->field_84;
                return r > 0;
            }
            int r = q[0x2c / 4];
            if (r > 0)
                return 1;
            r = q[0x28 / 4];
            return r > 0;
        }
    }
    return c > 0;
}
