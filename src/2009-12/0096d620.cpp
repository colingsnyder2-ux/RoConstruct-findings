// from server: 35% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl sub_544E10(
    void *, void *, const char *, const char *, int);

extern "C" void __cdecl sub_7F4929(DWORD);

void sub_96D620()
{
    sub_544E10(
        (void *)0x539470,
        (void *)0xB806D0,
        (const char *)0x9BE398,
        (const char *)0x9BE3AC,
        1);
    sub_7F4929(0x980700);
}
