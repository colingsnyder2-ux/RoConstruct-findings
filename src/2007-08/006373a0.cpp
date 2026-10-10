// from server: 85% by colin
struct CPatchedControlComboBox
{
    int sub_637320();
    void sub_637350(int);
    void sub_63c4a0(int);
    void sub_670f70(void*);
    void sub_635ce0();
    void sub_630004();
    void sub_6373a0(void*);
};

void CPatchedControlComboBox::sub_6373a0(void* arg)
{
    if (arg != 0)
    {
        *(int*)((char*)this + 0x1b4) = 0;
        *(int*)((char*)this + 0x184) = sub_637320();
    }
    else
    {
        int r = (*(int (__thiscall**)(void))(*(int*)this + 0x74))();
        if (r == 0 && *(int*)((char*)this + 0x178) == 0 && *(int*)((char*)this + 0x1b4) == 0)
        {
            sub_637350(*(int*)((char*)this + 0x184));
        }
        if (*(int*)((char*)this + 0x1b4) == 0)
        {
            sub_63c4a0(10);
        }
    }

    if (*(int*)((char*)this + 0x1c4) != 0 && arg != 0)
    {
        sub_635ce0();
    }

    *(void**)((char*)this + 0x168) = arg;

    if (arg != 0 && *(int*)((char*)this + 0x178) != 0)
    {
        sub_630004();
    }

    sub_670f70(arg);
}
