// from server: 50% by colin
struct CMemberTreeView
{
    char pad0[0x60];
    char pad60[0x40];
    char padA0[8];
    unsigned char fieldA8;
    int fieldAC;
    CMemberTreeView();
};

extern "C" void __fastcall sub_664F00(void*);
extern "C" void __fastcall sub_6304C0(void*);

CMemberTreeView::CMemberTreeView()
{
    sub_664F00(this);
    *(void**)this = (void*)0x78C7BC;
    *(void**)((char*)this + 0x60) = (void*)0x78C73C;
    sub_6304C0((char*)this + 0xA0);
    fieldA8 = 1;
    fieldAC = 0;
}
