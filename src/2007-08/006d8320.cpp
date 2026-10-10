// from server: 46% by colin
struct PaneBase
{
    char pad0[0x20];
    int field20;
    int field24;
    char pad28[0x1c];
    int field44;
    char pad48[0x08];
    int field50;
    char pad54[0x0c];
    int field60;
    int field64;
    int field68;
    int field6c;
    int field70;
    int field74;
    int field78;
    int field7c;

    void sub_6d7ca0();
    void sub_6e4440();
    void clear();
};

void PaneBase::sub_6d7ca0()
{
}

void PaneBase::sub_6e4440()
{
}

void PaneBase::clear()
{
    field20 = 0;
    field24 = 0;
    if (field50 != 0)
    {
        do
        {
            sub_6e4440();
            (*(void (__thiscall **)(void *))(*(int *)this + 0x54))(this);
        } while (field50 != 0);
    }
    sub_6d7ca0();
    field60 = 0;
    field64 = 0;
    field68 = 0;
    field6c = 0;
    int *p = &field70;
    int count = 4;
    do
    {
        if (*p != 0)
        {
            (*(void (__thiscall **)(int *, int))(*(int *)*p + 4))((int *)*p, 1);
            *p = 0;
        }
        p++;
        count--;
    } while (count != 0);
}
