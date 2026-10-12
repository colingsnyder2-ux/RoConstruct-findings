// from server: 40% by colin
// roc 2008-06 00568180  unit: RBX::VSelection::?$BoundFuncDesc  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568180

extern "C" {
    void* __stdcall sub_6A0920(unsigned int);
    void __stdcall sub_802458(void*);
    void __stdcall sub_802468(void*);
}

struct VSelectionBoundFuncDesc {
    char pad0[0x10];
    char pad10[0x4];
    char pad14[0xc];
    char pad20[0x4];
    char pad24[0x20];
    char pad44[0x20];
    char pad64[0x20];
    char pad84[0x20];
    char pada4[0x20];
    char padc4[0x6c];
    char pad130[0x24];
    char pad154[0x8];
    char pad15c[0x4];

    VSelectionBoundFuncDesc();
};

void __stdcall sub_567E20(void*);
void __stdcall sub_5E9EC0(void*);
void __stdcall sub_49AD50(void*, void*);
void __stdcall sub_5A2FE0(void*);
void __stdcall sub_55AF90(void*, void*);

VSelectionBoundFuncDesc::VSelectionBoundFuncDesc()
{
    sub_567E20(this);

    void* p130 = (char*)this + 0x130;
    sub_5E9EC0(p130);

    *(void**)this = (void*)0x82EDC4;
    *(void**)((char*)this + 0x10) = (void*)0x82EDB4;
    *(void**)((char*)this + 0x14) = (void*)0x82EDAC;
    *(void**)((char*)this + 0x20) = (void*)0x82EDA4;
    *(void**)((char*)this + 0x24) = (void*)0x82ED94;
    *(void**)((char*)this + 0x44) = (void*)0x82ED84;
    *(void**)((char*)this + 0x64) = (void*)0x82ED74;
    *(void**)((char*)this + 0x84) = (void*)0x82ED64;
    *(void**)((char*)this + 0xA4) = (void*)0x82ED54;
    *(void**)((char*)this + 0xC4) = (void*)0x82ED44;
    *(void**)p130 = (void*)0x82ED34;
    *(void**)((char*)this + 0x150) = (void*)0x82ED28;

    void* p = sub_6A0920(4);
    if (p == 0) {
        *(void**)p = (char*)this + 0x14;
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0x14) = p;
    *(void**)((char*)this + 0x20) = 0;
    *(void**)((char*)this + 0x24) = 0;
    *(void**)((char*)this + 0x28) = 0;

    sub_49AD50((char*)this + 0x154, (char*)this + 0x14);

    sub_5A2FE0((char*)this + 0x14);

    void* p2 = sub_6A0920(4);
    if (p2 != 0) {
        *(void**)p2 = (char*)this + 0x15C;
    } else {
        p2 = 0;
    }
    *(void**)((char*)this + 0x15C) = p2;
    *(void**)((char*)this + 0x168) = 0;
    *(void**)((char*)this + 0x16C) = 0;
    *(void**)((char*)this + 0x170) = 0;

    char buf[0x10];
    sub_802458((void*)0x82EEDC);
    sub_55AF90(this, buf);
    sub_802468(buf);
}
