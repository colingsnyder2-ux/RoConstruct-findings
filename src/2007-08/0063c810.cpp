// from server: 57% by colin
struct CXTPControlAction {
    char pad0[0x20];
    char field20[0x04];
    char pad24[0xb4];
    char fieldD8[0x04];
    char fieldDC[0x04];
    char fieldE0[0x04];
    char fieldE4[0x04];
    char fieldE8[0x04];
    char fieldEC[0x04];
    char fieldF0[0x04];
    char padF4[0x10];
    char field104[0x08];
    char field10C[0x1c];
    char field128[0x1c];
    char field144[0x24];
    CXTPControlAction();
};

extern "C" void __stdcall sub_73833A();
extern "C" void __stdcall sub_672220();
extern "C" void __stdcall sub_6322F0();
extern "C" void __stdcall sub_738334();
extern "C" void __stdcall SetRectEmpty(void*);
extern "C" void* __stdcall sub_77EE14(void*);

CXTPControlAction::CXTPControlAction()
{
    sub_73833A();
    *(void**)((char*)this + 0x00) = (void*)0x7c63ec;
    *(void**)((char*)this + 0x20) = (void*)0x7c638c;
    sub_672220();
    SetRectEmpty((char*)this + 0xd8);
    SetRectEmpty((char*)this + 0xdc);
    SetRectEmpty((char*)this + 0xe0);
    SetRectEmpty((char*)this + 0xe4);
    SetRectEmpty((char*)this + 0xe8);
    SetRectEmpty((char*)this + 0xec);
    SetRectEmpty((char*)this + 0xf0);
    SetRectEmpty((char*)this + 0x104);
    sub_6322F0();
    *(void**)((char*)this + 0x10c) = (void*)0x7c6370;
    sub_6322F0();
    *(void**)((char*)this + 0x128) = (void*)0x7c6370;
    sub_738334();
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
    *(int*)((char*)this + 0x8c) = 0;
    *(int*)((char*)this + 0x90) = 0;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0xd4) = 0;
    sub_77EE14((char*)this + 0xc0);
    sub_77EE14((char*)this + 0xb0);
    *(int*)((char*)this + 0xfc) = 0;
    *(int*)((char*)this + 0xf4) = 0;
    *(int*)((char*)this + 0x100) = 0;
    *(int*)((char*)this + 0xa0) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 1;
    *(int*)((char*)this + 0xac) = 0;
    *(int*)((char*)this + 0xa4) = 0;
    *(int*)((char*)this + 0xa8) = 0;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0xd0) = 0;
    *(int*)((char*)this + 0xf8) = 0;
    *(int*)((char*)this + 0x108) = 0;
    *(int*)((char*)this + 0x144) = 0;
    *(int*)((char*)this + 0x148) = -1;
    *(int*)((char*)this + 0x14c) = 0;
    *(int*)((char*)this + 0x150) = 1;
    *(int*)((char*)this + 0x154) = 0;
    *(int*)((char*)this + 0x158) = 0;
    *(int*)((char*)this + 0x15c) = 0;
    *(int*)((char*)this + 0x160) = 0;
    *(int*)((char*)this + 0x164) = 0;
}
