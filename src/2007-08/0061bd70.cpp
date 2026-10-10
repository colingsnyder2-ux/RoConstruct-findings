// from server: 81% by colin
struct ImageButton {
    char pad[0xfc];
    int field_fc;
    char pad2[0x104 - 0xfc - 4];
    int field_104;
    void func(int arg);
};

int sub_5555b0(ImageButton *self, int *out, int val);
void sub_601260(int *self, int a, int b);

void ImageButton::func(int arg)
{
    if (((bool (__thiscall *)(ImageButton *))((*(void ***)this)[0x58 / 4]))(this))
    {
        int local;
        int v = sub_5555b0(this, &local, field_fc);
        int w = ((int (__thiscall *)(ImageButton *, int))((*(void ***)this)[0x7c / 4]))(this, v);
        sub_601260((int *)((char *)this + 0x104), arg, w);
    }
}
