// from server: 62% by colin
struct Inner
{
    void destroy();
};

struct Outer
{
    char pad0[0x20];
    int count;
    Inner** items;
    char pad2[0x14];
    int flag;
    void clear();
};

void __stdcall sub_6a0944();
void __stdcall sub_6a0be4(Inner* p);
void __stdcall sub_70e1d0(int a, int b);

void Outer::clear()
{
    if (flag == 0)
    {
        int i = count - 1;
        if (i >= 0)
        {
            while (i >= 0)
            {
                if (i >= count)
                {
                    sub_6a0944();
                    break;
                }
                sub_6a0be4(items[i]);
                i--;
            }
        }
    }
    sub_70e1d0(-1, 0);
}
