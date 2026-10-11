// from server: 65% by colin
struct S
{
    void f(bool value);
    unsigned char field_1e8;
};

extern "C" void __cdecl sub_40db00();

void S::f(bool value)
{
    unsigned char old = field_1e8;
    unsigned char current = (old >> 4) & 1;
    if (current != (unsigned char)value)
    {
        unsigned char v = (unsigned char)value;
        unsigned char updated = old ^ ((v << 4) & 0x10);
        field_1e8 = updated;
        sub_40db00();
    }
}
