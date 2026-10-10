// from server: 79% by colin
extern "C" int __cdecl sub_00632C50(int);
extern "C" int __cdecl sub_0062FF4A(int);
extern "C" int __cdecl sub_006A2770(int, int);
extern "C" int __cdecl sub_00632520(int);
extern "C" int __cdecl sub_006D26B0(int, int, int);
extern "C" int __cdecl sub_006301E4(int);

struct MyXTPCommandBars
{
    void sub_006348A0(int);
};

void MyXTPCommandBars::sub_006348A0(int a2)
{
    int v3 = sub_00632C50(a2);
    if (v3 == -1)
        return;

    if (a2 != 0)
    {
        if (*(int*)(a2 + 0x20) != 0)
            sub_0062FF4A(a2);
    }

    int v4 = *(int*)(a2 + 0x180);
    *(int*)(a2 + 0xd8) = 0;
    if (v4 != 0)
    {
        sub_006A2770(a2, -1);
        *(int*)(a2 + 0x180) = 0;
        sub_00632520((int)this);
    }

    (*(void(__thiscall**)(int, int))(*(int*)this + 0x7c))((int)this, a2);
    (*(void(__thiscall**)(int))(*(int*)a2 + 0x1dc))(a2);
    sub_006D26B0((int)this + 0x7c, v3, 1);
    sub_006301E4(a2);
}
