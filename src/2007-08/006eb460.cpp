// from server: 57% by colin
struct CXTPDockingPaneShortcutBar2003Theme {
    void Construct();
};

extern "C" void __stdcall sub_6EA820();
extern "C" void __stdcall sub_702710(int);
extern "C" void __stdcall sub_7009F0(int);

void CXTPDockingPaneShortcutBar2003Theme::Construct()
{
    sub_6EA820();
    *(int*)0x7DAA4C = 0;
    *(int*)((char*)this + 0x00) = 0x7DAA4C;
    sub_702710(0);
    sub_7009F0(8);
    *(int*)(*(int*)((char*)this + 0xA0) + 0x20) = 1;
    sub_702710(0);
    sub_7009F0(8);
    *(int*)(*(int*)((char*)this + 0x9C) + 0x20) = 1;
    *(int*)((char*)this + 0x1E0) = 1;
    *(int*)((char*)this + 0x7C) = 7;
    *(int*)((char*)this + 0x70) = 3;
}
