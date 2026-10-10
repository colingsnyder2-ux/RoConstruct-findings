// from server: 83% by colin
struct CXTPControlComboBoxPopupBar
{
    char pad[0x5c];
    char field_5c[0x9c];
    char field_f8[4];
    int OnCommand(int, int);
    int GetItem(int);
    int GetCommandBar();
    int AddCommand(int, int, const char*);
    int SetCommandBars(int);
};

extern "C" int __stdcall sub_0067C5E0(int, int);
extern "C" int __stdcall sub_007383F4(int, const char*);
extern "C" int __stdcall sub_00671F00(int, const char*, int, int);
extern "C" int __stdcall sub_0063023E(int);

int CXTPControlComboBoxPopupBar::OnCommand(int nID, int nCode)
{
    if ((unsigned)(nID - 1) <= 0xFFFFFD)
    {
        int item = sub_0067C5E0(*(int*)((char*)this + 0xf8), nID);
        if (item)
        {
            int bar = sub_007383F4(item, "CXTPCommandBars");
            if (!bar)
                return (int)0x80004005;
            return sub_00671F00((int)((char*)this + 0x5c), "CXTPCommandBars", nCode, bar);
        }
    }

    if (nID == -4 || nID == -3)
    {
        int bar = sub_007383F4((int)this, "CXTPCommandBars");
        if (!bar)
            return (int)0x80004005;
        return sub_00671F00((int)((char*)this + 0x5c), "CXTPCommandBars", nCode, bar);
    }

    return sub_0063023E((int)this);
}
