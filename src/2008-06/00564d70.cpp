// from server: 25% by colin
// roc 2008-06 00564d70  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 360 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564d70

extern "C" void __stdcall sub_56C590(int, int);
extern "C" void __stdcall sub_446110(int, int);
extern "C" void* __stdcall sub_6A0920(int);
extern "C" void __stdcall sub_64D530(int, int);

struct S {
    char pad0[0x30];
    char field30[0x20];
    char field50[0x20];
    char field70[0x18];
    char field88[0x18];
    char fieldA0[0x18];
    char fieldB8[0x18];
    char fieldD0[0x18];
    void __cdecl f(int, int);
};

void S::f(int a, int b) {
    sub_56C590(0x82E3A0, 0x9452C4);
    *(int*)this = 0x82E308;
    sub_446110((int)(this + 0x30), (int)(this + 0x30));
    sub_446110((int)(this + 0x50), (int)(this + 0x50));
    *(int*)(this + 0x70) = (int)sub_6A0920(4);
    *(int*)(this + 0x7C) = 0;
    *(int*)(this + 0x80) = 0;
    *(int*)(this + 0x84) = 0;
    *(int*)(this + 0x88) = (int)sub_6A0920(4);
    *(int*)(this + 0x94) = 0;
    *(int*)(this + 0x98) = 0;
    *(int*)(this + 0x9C) = 0;
    *(int*)(this + 0xA0) = (int)sub_6A0920(4);
    *(int*)(this + 0xAC) = 0;
    *(int*)(this + 0xB0) = 0;
    *(int*)(this + 0xB4) = 0;
    *(int*)(this + 0xB8) = (int)sub_6A0920(4);
    *(int*)(this + 0xC4) = 0;
    *(int*)(this + 0xC8) = 0;
    *(int*)(this + 0xCC) = 0;
    *(int*)(this + 0xD0) = (int)sub_6A0920(4);
    *(int*)(this + 0xDC) = 0;
    *(int*)(this + 0xE0) = 0;
    *(int*)(this + 0xE4) = 0;
    sub_64D530((int)this, 0);
    sub_64D530((int)this, 1);
}
