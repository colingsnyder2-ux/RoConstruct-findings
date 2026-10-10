// from server: 84% by colin
struct CXTPPropertyGridItem
{
    char pad[0x20];
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
};

struct Inner
{
    char pad[8];
    int field_8;
};

extern int __fastcall func_00699000(CXTPPropertyGridItem* self, int, int index);
extern void __fastcall func_006d2910(Inner* self, int, int a);

void __fastcall func_00699830(CXTPPropertyGridItem* self, int, int arg)
{
    int i = 0;
    if (self->field_28 > 0)
    {
        Inner* inner = (Inner*)((char*)self + 0x20);
        do
        {
            int v = func_00699000(self, 0, i);
            func_006d2910(inner, inner->field_8, v);
            i++;
        } while (i < self->field_28);
    }
}
