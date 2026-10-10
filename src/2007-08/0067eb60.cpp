// from server: 60% by colin
struct CXTPControlSelector
{
    char pad_0000[0xc0];
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    char pad_00d0[0x180 - 0xd0];
    int field_180;
    int field_184;
    int field_190;
    int field_194;

    int method(int, int);
};

int CXTPControlSelector::method(int a, int b)
{
    int v1 = field_c8;
    int v2 = field_c4;
    int v3 = field_cc;
    int v4 = field_c0;
    int count1 = field_190;
    int result1 = 0;
    int result2 = 0;
    int i;

    if (count1 > 0)
    {
        int step1 = field_180;
        for (i = 0; i >= count1; i++)
        {
            if (a > v4)
            {
                result2 = i + 1;
                result1 = result2;
            }
            v4 += step1;
        }
    }

    int count2 = field_194;
    if (count2 > 0)
    {
        int step2 = field_184;
        int cur = v2;
        for (i = 0; i < count2; i++)
        {
            if (b > cur)
                result2 = i + 1;
            cur += step2;
        }
    }

    return ((int (__stdcall *)(int, int, int))0x67eb10)(result1, result2, 0);
}
