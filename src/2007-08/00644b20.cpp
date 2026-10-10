// from server: 42% by colin
struct CXTPCommandBar {
    char pad[0xc8];
    int field_c8;
    char pad2[0xf8 - 0xcc];
    int field_f8;
    int method_644720(int);
    int method_67a850(int, int, int, int, int);

    int method_644b20(int *pOut, int *pIn);
};

struct Inner {
    int v;
    int get();
};

extern "C" {
    int __stdcall sub_67a850(int, int, int, int, int);
    int __stdcall sub_6a4b50(int, int);
    int __stdcall sub_63a580(int);
    int __stdcall sub_77dcd0(int);
    int __stdcall sub_77e160(int, int, int);
    int __stdcall sub_77dcc8(int);
    int __stdcall sub_77d578(int, int, int);
    int __stdcall sub_77ddbc(int);
}

int CXTPCommandBar::method_644720(int a)
{
    return 0;
}

int CXTPCommandBar::method_67a850(int a, int b, int c, int d, int e)
{
    return 0;
}

int CXTPCommandBar::method_644b20(int *pOut, int *pIn)
{
    int result;
    int idx;
    int v1;
    int v2;
    int v3;
    int flag;
    int tmp;
    int i;

    idx = sub_67a850(this->field_c8, 1, 1, 0, 1);
    if (idx == -1)
        return -1;

    *pOut = 0;
    v1 = -1;
    v2 = -1;
    flag = 0;

    for (;;)
    {
        int obj = this->method_644720(idx);
        int *vtbl = *(int **)obj;
        int (*fn)(int *, int *) = (int (*)(int *, int *))vtbl[0x58 / 4];
        fn((int *)obj, &v3);

        if (sub_77dcd0((int)&v3))
            break;

        tmp = *(int *)(obj + 0x9c);
        if (tmp == -1)
        {
            int t = *(int *)(obj + 0x158);
            if (t)
                tmp = sub_63a580(t);
        }
        if (!tmp)
            break;

        i = sub_77e160(0, 0x26, (int)&v3);
        if (i > -1)
        {
            int len = sub_77dcc8((int)&v3);
            if (i < len - 1)
            {
                flag = 1;
                tmp = i + 1;
            }
            else
            {
                flag = 0;
                tmp = 0;
            }
        }
        else
        {
            flag = 0;
            tmp = 0;
        }

        if (!sub_6a4b50(sub_77d578((int)&v3, tmp, *pIn), 0))
            break;

        if (flag)
        {
            if (v1 != -1)
            {
                *pOut = 1;
                sub_77ddbc((int)&v3);
                return v1;
            }
            v1 = *(int *)(obj + 0x80);
        }
        else
        {
            if (v2 == -1)
            {
                v2 = *(int *)(obj + 0x80);
            }
            else
            {
                *pOut = 1;
            }
        }
    }

    sub_77ddbc((int)&v3);

    idx = sub_67a850(this->field_f8, idx, 1, 0, 0);
    if (idx != -1)
        return -1;

    if (v1 != -1)
        return v1;
    return v2;
}
