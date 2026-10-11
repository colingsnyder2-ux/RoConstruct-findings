// from server: 44% by colin
struct S {
    char pad[0x138];
    int f();
};

extern "C" void __stdcall sub_5d5420();
extern "C" void __stdcall sub_55af90();
extern "C" void __stdcall sub_802458();
extern "C" void __stdcall sub_802468();

int S::f() {
    sub_5d5420();
    *(int*)((char*)this + 0x00) = 0x83cb44;
    *(int*)((char*)this + 0x10) = 0x83cb34;
    *(int*)((char*)this + 0x14) = 0x83cb2c;
    *(int*)((char*)this + 0x20) = 0x83cb24;
    *(int*)((char*)this + 0x24) = 0x83cb14;
    *(int*)((char*)this + 0x44) = 0x83cb04;
    *(int*)((char*)this + 0x64) = 0x83caf4;
    *(int*)((char*)this + 0x84) = 0x83cae4;
    *(int*)((char*)this + 0xa4) = 0x83cad4;
    *(int*)((char*)this + 0xc4) = 0x83cac4;
    *(int*)((char*)this + 0x130) = 0x83cabc;
    *(int*)((char*)this + 0x134) = 0xe2;
    sub_802458();
    sub_55af90();
    sub_802468();
    return (int)this;
}
