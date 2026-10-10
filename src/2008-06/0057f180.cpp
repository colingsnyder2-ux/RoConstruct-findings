// from server: 33% by tester
struct VSelectionBase {
    void construct();
};

struct FilteredSelection {
    char pad0[0x10];
    void* vtbl10;
    void* vtbl14;
    char pad18[8];
    void* vtbl20;
    void* vtbl24;
    char pad28[0x1c];
    void* vtbl44;
    char pad48[0x1c];
    void* vtbl64;
    char pad68[0x1c];
    void* vtbl84;
    char pad88[0x1c];
    void* vtbla4;
    char padA8[0x1c];
    void* vtblc4;
    char padC8[0x68];
    void* vtbl130;
    int field134;
    int field138;
    void* field13c;
    int field140;
    int field144;
    int field148;

    FilteredSelection();
};

extern "C" void* __stdcall sub_6a0920(int);
extern "C" void __stdcall sub_55af90(void*);
extern "C" void __stdcall sub_802458(void*);
extern "C" void __stdcall sub_802468(void*);

FilteredSelection::FilteredSelection()
{
    ((VSelectionBase*)this)->construct();
    *(void**)this = (void*)0x830a0c;
    *(void**)((char*)this + 0x10) = (void*)0x830a00;
    *(void**)((char*)this + 0x14) = (void*)0x8309f8;
    *(void**)((char*)this + 0x20) = (void*)0x8309f0;
    *(void**)((char*)this + 0x24) = (void*)0x8309e0;
    *(void**)((char*)this + 0x44) = (void*)0x8309d0;
    *(void**)((char*)this + 0x64) = (void*)0x8309c0;
    *(void**)((char*)this + 0x84) = (void*)0x8309b0;
    *(void**)((char*)this + 0xa4) = (void*)0x8309a0;
    *(void**)((char*)this + 0xc4) = (void*)0x830990;
    *(void**)((char*)this + 0x130) = (void*)0x830988;
    field134 = 0;
    field138 = 0;
    void* p = sub_6a0920(4);
    if (p == 0) {
        *(void**)p = (char*)this + 0x13c;
    } else {
        p = 0;
    }
    field13c = p;
    field140 = 0;
    field144 = 0;
    field148 = 0;
    char buf[0x1c];
    sub_802458(buf);
    sub_55af90((char*)this + 0x13c);
    sub_802468(buf);
}
