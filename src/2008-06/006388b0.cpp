// from server: 39% by colin
// roc 2008-06 006388b0  unit: G3D::VCoordinateFrame::V?$Value::?$FactoryProduct  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006388b0

extern "C" {
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

struct S {
    char pad0[0x130];
    float f130;
    float f134;
    float f138;
    void* ctor();
};

void base_ctor(S* self);
void sub_55af90(S* self, void* str);

void* S::ctor()
{
    base_ctor(this);
    *(void**)this = (void*)0x84978c;
    *(void**)((char*)this + 0x10) = (void*)0x849780;
    *(void**)((char*)this + 0x14) = (void*)0x849778;
    *(void**)((char*)this + 0x20) = (void*)0x849770;
    *(void**)((char*)this + 0x24) = (void*)0x849760;
    *(void**)((char*)this + 0x44) = (void*)0x849750;
    *(void**)((char*)this + 0x64) = (void*)0x849740;
    *(void**)((char*)this + 0x84) = (void*)0x849730;
    *(void**)((char*)this + 0xa4) = (void*)0x849720;
    *(void**)((char*)this + 0xc4) = (void*)0x849710;
    f130 = *(float*)0x97d320;
    f134 = *(float*)0x97d324;
    f138 = *(float*)0x97d328;

    char buf[0x20];
    sub_802458(buf);
    sub_55af90(this, buf);
    sub_802468(buf);

    return this;
}
