// from server: 60% by colin
struct CXTPCommandBar
{
    char pad0[0x30];
    char field30[0x30];
    char field60[0x30];
    int sub_648600();
    int getSomething();
};

int CXTPCommandBar::getSomething()
{
    int result = sub_648600();
    if (result == 0)
        return (int)field60;
    return (int)field30;
}
