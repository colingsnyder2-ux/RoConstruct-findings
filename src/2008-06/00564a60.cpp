// from server: 39% by colin




struct RBX_Debugable_W4AssertAction_EnumDesc {
    void construct();
};

extern "C" void __cdecl sub_56C590(int, int);
extern "C" void __cdecl sub_446110(void*, void*);
extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" void __cdecl sub_64D530(void*, int, int);

void RBX_Debugable_W4AssertAction_EnumDesc::construct()
{
    sub_56C590(0x945270, 0x82E32C);

    *(int*)((char*)this + 0) = 0x82E2F0;

    char tmp1;
    char tmp2;

    sub_446110(&tmp1, &tmp2);
    sub_446110(&tmp1, &tmp2);

    void* p;

    p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = (char*)this + 0x70;
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0x70) = p;
    *(int*)((char*)this + 0x7C) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0x84) = 0;

    p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = (char*)this + 0x88;
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0x88) = p;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9C) = 0;

    p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = (char*)this + 0xA0;
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0xA0) = p;
    *(int*)((char*)this + 0xAC) = 0;
    *(int*)((char*)this + 0xB0) = 0;
    *(int*)((char*)this + 0xB4) = 0;

    p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = (char*)this + 0xB8;
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0xB8) = p;
    *(int*)((char*)this + 0xC4) = 0;
    *(int*)((char*)this + 0xC8) = 0;
    *(int*)((char*)this + 0xCC) = 0;

    p = sub_6A0920(4);
    if (p != 0) {
        *(void**)p = (char*)this + 0xD0;
    } else {
        p = 0;
    }
    *(void**)((char*)this + 0xD0) = p;
    *(int*)((char*)this + 0xDC) = 0;
    *(int*)((char*)this + 0xE0) = 0;
    *(int*)((char*)this + 0xE4) = 0;

    sub_64D530(this, 0, 0x82E320);
    sub_64D530(this, 1, 0x82E318);
    sub_64D530(this, 2, 0x82E310);
}
