// from server: 96% by colin
struct CXTSplitterWnd
{
    char pad0[0x80];
    int field_80;
    int field_84;
    char pad1[0x0c];
    int field_94;
    char pad2[0x5c];
    int field_f4;
    int field_f8;

    void method_6907b0(int);
    void method_738ade(int, int);
    void method_738ad2(int);
    void method_62ff4a(int);
    CXTSplitterWnd *method_630652(int, int);
    CXTSplitterWnd *method_6305b0(int, int);
};

void CXTSplitterWnd::method_6907b0(int a)
{
    int local1;
    int local2;

    if (field_f8 != -1)
    {
        if (field_f8 == a)
            return;
        (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x1b4))(this);
    }

    field_f8 = a;

    if ((*(int (__thiscall **)(CXTSplitterWnd *, int *, int *))(*(int *)this + 0x16c))(this, &local1, &local2))
    {
        if (local1 == a)
        {
            local1++;
            if (local1 >= field_80)
                local1 = 0;
            (*(void (__thiscall **)(CXTSplitterWnd *, int, int, int))(*(int *)this + 0x170))(this, local1, local2, 0);
        }
    }

    for (int i = 0; i < field_84; i++)
    {
        CXTSplitterWnd *p = method_630652(i, a);
        p->method_62ff4a(0);

        int v;
        if (field_f4 != -1)
        {
            if (field_f4 > i)
                v = i + 1;
            else
                v = i;
        }
        else
        {
            v = i;
        }

        p->method_738ad2((field_80 + 0xe90) * 16 + v);

        for (int j = a + 1; j < field_80; j++)
        {
            CXTSplitterWnd *q = method_630652(j, i);
            q->method_738ad2((int)method_6305b0(j - 1, i));
        }
    }

    field_80--;

    int *arr = (int *)field_94;
    arr[field_80 * 3 + 2] = arr[a * 3 + 2];

    (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x148))(this);
}
