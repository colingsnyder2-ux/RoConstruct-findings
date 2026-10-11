// from server: 35% by colin
struct CComboBox {
    void sub_6A0E90();
    void sub_717FB0(int);
    void sub_718570(int, int);
    char pad[0x54];
    int field_54;
    int f();
};

int CComboBox::f()
{
    sub_6A0E90();
    field_54 = 0;
    *(int*)this = 0x85813C;
    sub_717FB0(1);
    sub_718570(0x851964, 0);
    return (int)this;
}
