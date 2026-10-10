// from server: 42% by colin
struct CXTPDockingPaneVisioTheme {
    unsigned char pad0[0x74];
    int field74;
    unsigned char pad78[0x24];
    void* field9c;
    void* fielda0;
    unsigned char padA4[0x19c];
    int field240;

    CXTPDockingPaneVisioTheme* ctor();
};

extern "C" void __stdcall SetRect(void*, int, int, int, int);
extern "C" void __stdcall sub_6EB270();
extern "C" void __stdcall sub_702710(void*, int);

CXTPDockingPaneVisioTheme* CXTPDockingPaneVisioTheme::ctor()
{
    sub_6EB270();
    this->field240 = 0;
    *(void**)this = (void*)0x7da9bc;
    this->field74 = 8;

    sub_702710(this->fielda0, 10);
    *(int*)((char*)this->fielda0 + 0x20) = 1;

    sub_702710(this->field9c, 10);
    *(int*)((char*)this->field9c + 0x20) = 1;

    SetRect((char*)this->fielda0 + 0x60, 2, 1, 2, 1);
    SetRect((char*)this->field9c + 0x60, 2, 1, 2, 1);

    return this;
}
