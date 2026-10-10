// from server: 54% by colin
struct CXTPCommandBar
{
    char pad[0xe0];
    int field_e0;
    char pad2[0x20];
    int field_104;
    char pad3[0x18];
    int field_11c;
    int field_120;
    int field_124;
    char pad5[0x28];
    int field_150;
    char pad6[0x48];
    int field_19c;

    int func(int, int, int, int, int);
};

struct CXTPCommandBarSite
{
    int field_0;
    int field_4;
};

extern "C" int __stdcall sub_738376();
extern "C" CXTPCommandBarSite* __fastcall sub_643980(CXTPCommandBar*);
extern "C" int __fastcall sub_6338d0(CXTPCommandBarSite*);
extern "C" int __fastcall sub_646570(CXTPCommandBar*);
extern "C" int __fastcall sub_738322(int);
extern "C" int __fastcall sub_73836a(int, int);
extern "C" int __fastcall sub_6a3a70(int);
extern "C" int __fastcall sub_6a3b10(int);
extern "C" int __fastcall sub_6a3ac0(int, int);
extern "C" int __fastcall sub_678de0(CXTPCommandBar*, int, int, int);
extern "C" int __fastcall sub_631eb0(CXTPCommandBar*);
extern "C" int __stdcall sub_62ff20();
extern "C" void __stdcall ReleaseCapture();

int CXTPCommandBar::func(int a2, int a3, int a4, int a5, int a6)
{
    if (a2 == 0)
        return 0;

    int* p = (int*)(sub_738376() + 0x58);
    if (p[1] == 0x7b && p[3] == -1)
    {
        CXTPCommandBarSite* site = sub_643980(this);
        if (site != 0)
        {
            site = sub_643980(this);
            sub_6338d0(site);
        }
    }

    int v = a4;
    if (v == 0)
        v = sub_646570(this);

    field_e0 = v;
    field_104 = a5;

    int flags = a3;
    if (v != 0)
    {
        if (sub_738322(v) & 0x401000)
            flags = a3 | 8;
    }

    int local = 1;
    field_150 = 0;
    if (flags & 0x100)
    {
        field_150 = (int)&local;
        local = 0;
    }

    field_11c = flags & 2;
    field_19c = ((flags & 8) | 0x10) >> 3;
    field_120 = flags & 0x80;
    field_124 = flags & 1;

    int obj = sub_73836a(0x8c9314, 0x632280);
    if (obj == 0)
        return sub_62ff20();

    if (field_124 == 0)
    {
        sub_6a3a70(obj);
        ReleaseCapture();
    }
    else
    {
        sub_6a3b10(obj);
        sub_6a3ac0(obj, 1);
    }

    *(int*)(obj + 0x40) = 1;

    if (sub_678de0(this, a6, a4, a5) == 0)
        return 0;

    sub_631eb0(this);

    if (field_124 != 0)
        sub_6a3ac0(obj, 0);

    return a3;
}
