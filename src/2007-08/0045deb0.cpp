// from server: 55% by colin
extern "C" __declspec(dllimport) int __stdcall GetLocaleInfoA(unsigned int Locale, unsigned int LCType, char* lpLCData, int cchData);

struct CScintillaFindReplaceDlg
{
    char pad_0000[0x58];
    char field_0058[0x5c];
    char pad_00b4[0x04];
    int field_00b8;
    int field_00bc;
    int field_00c0;
    int field_00c4;
    int field_00c8;
    int field_00cc;
    int field_00d0;
    int field_00d4;
    int field_00d8;
    int field_00dc;
    int field_00e0;
    int field_00e4;
    int field_00e8;

    CScintillaFindReplaceDlg();
};

extern "C" void __stdcall sub_630508();
extern "C" void __stdcall sub_45be10();

CScintillaFindReplaceDlg::CScintillaFindReplaceDlg()
{
    sub_630508();
    *(void**)this = (void*)0x794264;
    sub_45be10();
    *(void**)((char*)this + 0xb4) = (void*)0x7941c0;
    field_00b8 = 0;
    field_00c4 = 0;
    field_00c0 = 0;
    field_00bc = 0;
    field_00c8 = 0;
    field_00cc = 0;
    field_00d0 = 0;
    field_00d4 = 0;
    field_00d8 = 1;
    field_00dc = 1;
    field_00e0 = 1;
    field_00e4 = 1;
    char buf[4];
    GetLocaleInfoA(0x400, 0xd, buf, 3);
    field_00e8 = (buf[0] == 0x30) ? 1 : 0;
}
