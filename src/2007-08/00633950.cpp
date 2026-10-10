// from server: 58% by colin
struct CXTPCommandBar {
    int field_0x74;
    int getItem(int, int);
    int getItemData(int);
    int getItemCount(int);
};

extern int __cdecl sub_0067a850(int, int, int, int, int, int);

int CXTPCommandBar::getItem(int a, int b)
{
    int* p = (int*)a;
    int v = sub_0067a850(*p, b, 1, 1, 0, 1);
    int* q = (int*)((char*)this + 0x74);
    if ((*(unsigned char*)(*q + 0x5c) & 1) != 0 && v <= b)
    {
        int* r = (int*)*p;
        int e = r[8];
        int x = getItem(e, 1);
        int y = getItemData(x);
        int z = getItemCount(y);
        int* w = (int*)(z + 0xf8);
        *p = *w;
        int t = sub_0067a850(*w, -1, 1, 1, 0, 1);
        if (t == -1)
        {
            while (z != e)
            {
                x = getItem(z, 1);
                y = getItemData(x);
                z = getItemCount(y);
                w = (int*)(z + 0xf8);
                *p = *w;
                t = sub_0067a850(*w, -1, 1, 1, 0, 1);
                if (t != -1)
                    break;
            }
        }
        v = t;
    }
    int* s = (int*)*p;
    if (v >= 0 && v < s[11])
        return *(int*)(s[10] + v * 4);
    return 0;
}
