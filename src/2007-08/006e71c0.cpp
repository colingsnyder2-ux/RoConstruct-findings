// from server: 51% by colin
struct CXTPDockingPaneOffice2003Theme {
    void Destructor();
};

extern "C" void __stdcall sub_6e59f0();
extern "C" void __stdcall sub_702710(int);

void CXTPDockingPaneOffice2003Theme::Destructor()
{
    sub_6e59f0();
    *(int*)((char*)this + 0xa0) = 0;
    sub_702710(0);
    *(int*)((char*)this + 0x9c) = 0;
    sub_702710(0);
    *(int*)((char*)this + 0x70) = 0;
}
