// from server: 50% by colin
struct CXTPToolBar {
    void CControlButtonCustomize();
};

void CXTPToolBar::CControlButtonCustomize()
{
    *(int*)((char*)this + 0x20) = 0x7c715c;
    *(int*)this = 0x7c71bc;
    *(int*)((char*)this + 0xf8) = 3;
    *(int*)((char*)this + 0x178) = 0;
    *(int*)((char*)this + 0xd4) = 0x1c;
    *(int*)((char*)this + 0x16c) = ((int (__stdcall*)())0x677390)();
}
