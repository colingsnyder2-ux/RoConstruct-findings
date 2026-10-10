// from server: 78% by colin
struct VPlayer {
    char pad[0x13c];
    int field_13c;
    void sub_490B60();
    void sub_444710(int);
    void sub_491430(int);
};

extern "C" int __cdecl sub_4915F0(int, int);
extern "C" bool __cdecl sub_77E630(int*, int*);
extern "C" int __cdecl sub_77E690(int*, int*);

void VPlayer::sub_491430(int a)
{
    if (sub_77E630(&field_13c, &a)) {
        sub_77E690(&field_13c, &a);
        if (sub_4915F0((int)this, 0)) {
            sub_490B60();
        }
        sub_444710(0x8bdf20);
    }
}
