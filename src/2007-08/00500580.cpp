// from server: 86% by colin
extern "C" bool __cdecl sub_5002F0();
extern "C" bool __cdecl sub_500310();
extern "C" void __cdecl sub_4FF420(unsigned int);
extern "C" void __cdecl sub_630B8C(unsigned int);

void __cdecl sub_500580(unsigned char value)
{
    if (sub_5002F0() && sub_500310())
    {
        unsigned int expanded = (unsigned int)value * 0x01010101u;
        sub_4FF420(expanded);
    }
    else
    {
        sub_630B8C((unsigned int)value);
    }
}
