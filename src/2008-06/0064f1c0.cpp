// from server: 30% by tester
struct RBX_ImageButton {
    char pad[0x148];
    int field_148;
    void construct(int a, int b);
};

extern "C" void __stdcall sub_6422B0();
extern "C" void __stdcall sub_6010E0();
extern "C" void __stdcall sub_55AF90();

void RBX_ImageButton::construct(int a, int b)
{
    sub_6422B0();
    *(int*)((char*)this + 0x148) = 0;
    *(int*)((char*)this + 0x00) = 0x84b814;
    *(int*)((char*)this + 0x10) = 0x84b804;
    *(int*)((char*)this + 0x14) = 0x84b7fc;
    *(int*)((char*)this + 0x20) = 0x84b7f4;
    *(int*)((char*)this + 0x24) = 0x84b7e4;
    *(int*)((char*)this + 0x44) = 0x84b7d4;
    *(int*)((char*)this + 0x64) = 0x84b7c4;
    *(int*)((char*)this + 0x84) = 0x84b7b4;
    *(int*)((char*)this + 0xa4) = 0x84b7a4;
    *(int*)((char*)this + 0xc4) = 0x84b794;
    *(int*)((char*)this + 0x130) = 0x84b78c;
    sub_6010E0();
    sub_55AF90();
}
