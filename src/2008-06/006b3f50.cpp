// from server: 58% by colin
struct CXTPPaintManager {
    int field_0x68;
    char pad_0x6c[0xc0];
    int field_0x12c;
    int method_718430();
    int method_7180b0(int, int, int, int, int);
    int method_6ae270(int, int, int, int, int, int);
    int method_6b3f50(int, int, int, int, int, int, int);
};

int CXTPPaintManager::method_6b3f50(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    if (this->field_0x68 != 0)
    {
        if (this->method_718430() != 0)
        {
            int v = a1;
            if (v != 0)
                v = *(int*)(v + 4);
            int flag = (a6 != 0) ? 1 : 0;
            flag++;
            int local = 0;
            this->method_7180b0(v, flag, 0, (int)&local, 0);
            return 0;
        }
    }

    if (*(int*)(a5 + 0x78) == 0)
    {
        int local[4];
        local[0] = a2;
        local[1] = a3;
        local[2] = a4;
        local[3] = a7;
        this->method_6ae270(a5, 0x10, 0x14, (int)local, 0, 0);
    }
    return 0;
}
