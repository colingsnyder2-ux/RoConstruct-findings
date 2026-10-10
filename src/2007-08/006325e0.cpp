// from server: 80% by colin
struct CXTPCommandBarKeyboardTip
{
    int field_0x00[0x28];
    int field_0xa0;
    int GetTip();
};

extern "C" int __cdecl sub_63096A(int);
extern "C" int __cdecl sub_6A40D0(int);
extern "C" int __cdecl sub_630202(int);

int CXTPCommandBarKeyboardTip::GetTip()
{
    int p = field_0xa0;
    if (p == 0)
        return 0;
    if (*(int*)(p + 0x20) == 0)
        return 0;
    return sub_630202(sub_6A40D0(sub_63096A(0xe804)));
}
