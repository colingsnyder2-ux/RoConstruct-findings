// from server: 31% by colin
struct Flag {
    char pad[0x228];
    int field_228;
    void onServiceProvider(void* oldProvider, void* newProvider);
};

extern "C" {
    int __cdecl sub_630D36(int, int, int, int, int);
    int __cdecl sub_5D1DF0();
    void __cdecl sub_5E69D0(int, int);
    int __cdecl sub_4AC3D0(int, int, int);
    void __cdecl sub_728640(int, int);
    void __cdecl sub_728460(int);
    void __cdecl sub_49A230(int);
}

void Flag::onServiceProvider(void* oldProvider, void* newProvider)
{
    int result = sub_630D36(0, 0x881f4c, 0x884a28, 0, (int)newProvider);
    if (result == 0)
        return;

    int obj = sub_5D1DF0();
    if (obj == 0)
        return;

    int local1 = 0;
    int local2 = 0x5e7250;
    int local3 = 0;
    int local4 = (int)oldProvider;
    int local5 = (int)this;
    int local6 = (int)newProvider;

    sub_5E69D0((int)&local2, (int)&local1);

    int tmp = 0;
    int r = sub_4AC3D0(0x8c2990, (int)&tmp, obj + 4);
    sub_728640((int)this + 0x228, r);
    sub_728460((int)&tmp);
    sub_49A230((int)&local1);
}
