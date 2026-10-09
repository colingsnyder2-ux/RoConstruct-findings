// from server: 100% by colin
// roc 2007-08 00658bf0  unit: CXTPReportControl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00658bf0
//
// 00658bf0  83ec08               sub esp, 8
// 00658bf3  56                   push esi
// 00658bf4  8bf1                 mov esi, ecx
// 00658bf6  8b8624020000         mov eax, dword ptr [esi + 0x224]
// 00658bfc  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00658c00  7542                 jne 0x658c44
// 00658c02  8d4c2404             lea ecx, [esp + 4]
// 00658c06  51                   push ecx
// 00658c07  ff1554ec7700         call dword ptr [0x77ec54]
// 00658c0d  85c0                 test eax, eax
// 00658c0f  7433                 je 0x658c44
// 00658c11  8b4620               mov eax, dword ptr [esi + 0x20]
// 00658c14  8d542404             lea edx, [esp + 4]
// 00658c18  52                   push edx
// 00658c19  50                   push eax
// 00658c1a  ff1550ec7700         call dword ptr [0x77ec50]
// 00658c20  8b442408             mov eax, dword ptr [esp + 8]
// 00658c24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00658c28  8b16                 mov edx, dword ptr [esi]
// 00658c2a  8b92bc010000         mov edx, dword ptr [edx + 0x1bc]
// 00658c30  50                   push eax
// 00658c31  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 00658c37  51                   push ecx
// 00658c38  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 00658c3e  50                   push eax
// 00658c3f  51                   push ecx
// 00658c40  8bce                 mov ecx, esi
// 00658c42  ffd2                 call edx
// 00658c44  8bce                 mov ecx, esi
// 00658c46  e8f375fdff           call 0x63023e
// 00658c4b  5e                   pop esi
// 00658c4c  83c408               add esp, 8
// 00658c4f  c20400               ret 4

struct CXTPReportControl {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    int field38;
    int field3C;
    int field40;
    int field44;
    int field48;
    int field4C;
    int field50;
    int field54;
    int field58;
    int field5C;
    int field60;
    int field64;
    int field68;
    int field6C;
    int field70;
    int field74;
    int field78;
    int field7C;
    int field80;
    int field84;
    int field88;
    int field8C;
    int field90;
    int field94;
    int field98;
    int field9C;
    int fieldA0;
    int fieldA4;
    int fieldA8;
    int fieldAC;
    int fieldB0;
    int fieldB4;
    int fieldB8;
    int fieldBC;
    int fieldC0;
    int fieldC4;
    int fieldC8;
    int fieldCC;
    int fieldD0;
    int fieldD4;
    int fieldD8;
    int fieldDC;
    int fieldE0;
    int fieldE4;
    int fieldE8;
    int fieldEC;
    int fieldF0;
    int fieldF4;
    int fieldF8;
    int fieldFC;
    int field100;
    int field104;
    int field108;
    int field10C;
    int field110;
    int field114;
    int field118;
    int field11C;
    int field120;
    int field124;
    int field128;
    int field12C;
    int field130;
    int field134;
    int field138;
    int field13C;
    int field140;
    int field144;
    int field148;
    int field14C;
    int field150;
    int field154;
    int field158;
    int field15C;
    int field160;
    int field164;
    int field168;
    int field16C;
    int field170;
    int field174;
    int field178;
    int field17C;
    int field180;
    int field184;
    int field188;
    int field18C;
    int field190;
    int field194;
    int field198;
    int field19C;
    int field1A0;
    int field1A4;
    int field1A8;
    int field1AC;
    int field1B0;
    int field1B4;
    int field1B8;
    int field1BC;
    int field1C0;
    int field1C4;
    int field1C8;
    int field1CC;
    int field1D0;
    int field1D4;
    int field1D8;
    int field1DC;
    int field1E0;
    int field1E4;
    int field1E8;
    int field1EC;
    int field1F0;
    int field1F4;
    int field1F8;
    int field1FC;
    int field200;
    int field204;
    int field208;
    int field20C;
    int field210;
    int field214;
    int field218;
    int field21C;
    int field220;
    int field224;
    void sub_63023E();
    void OnMouseMove(int x);
};

struct POINT {
    int x;
    int y;
};

extern "C" __declspec(dllimport) int __stdcall GetCursorPos(POINT* lpPoint);
extern "C" __declspec(dllimport) int __stdcall ScreenToClient(int hWnd, POINT* lpPoint);

void CXTPReportControl::OnMouseMove(int x)
{
    if (this->field224 == x) {
        POINT pt;
        if (GetCursorPos(&pt)) {
            ScreenToClient(this->field20, &pt);
            void (CXTPReportControl::*pfn)(int, int, int, int) = *(void (CXTPReportControl::**)(int, int, int, int))(*(int*)this + 0x1bc);
            (this->*pfn)(this->field1B4, this->field1B8, pt.x, pt.y);
        }
    }
    this->sub_63023E();
}
