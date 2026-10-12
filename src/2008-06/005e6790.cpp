// from server: 92% by king_originala
struct Owner {
    char pad_00[0x14];
    bool field_14;
    char pad_15[0x0b];
    Owner* field_20;
    char pad_24[0x30];
    bool field_54;
    char pad_55[0x14];
    bool field_69;

    void reset(int value);
    void update();
    void func_005e6790(int value);
};

void Owner::func_005e6790(int value)
{
    reset(value);
    field_14 = true;
    field_54 = true;
    field_69 = true;
    if (field_20)
        field_20->update();
}
