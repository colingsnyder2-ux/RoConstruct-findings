// from server: 57% by tester
struct CXTPCommandBar {
    char pad[0x70];
    int field_70;
    int sub_648600();
    int sub_648740();
    int sub_648760();
};

int CXTPCommandBar::sub_648760()
{
    int r = sub_648600();
    if (r == 0)
        return (int)&field_70;
    return sub_648740();
}
