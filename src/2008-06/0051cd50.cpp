// from server: 65% by colin
extern "C" int __cdecl sub_529A50(int a, const char* b);

struct DialogTemplate {
    char pad0[8];
    int flags;
    char pad1[0xf0];
    int field_fc;
    char pad2[0x24];
    float field_28;
};

void __cdecl sub_51CD50(DialogTemplate* self, int a, int b, int c);
void __cdecl sub_51CD50(DialogTemplate* self, int a, int b, int c)
{
    if (a == 0)
        return;
    if (b == 0)
        return;
    if (c > 0x7fffffff)
    {
        sub_529A50(a, "Limiting gamma to 21474.83");
        c = 0x7fffffff;
    }
    else if (c < 0)
    {
        sub_529A50(a, "Setting negative gamma to zero");
        c = 0;
    }
    self->flags |= 1;
    self->field_fc = c;
    self->field_28 = (float)c * *(double*)0x828f80;
    if (c == 0)
        sub_529A50(a, "Setting gamma=0");
}
