// from server: 24% by colin
struct RBX_Feature_W4InOut_EnumDesc
{
    void construct();
};

extern "C" void __stdcall sub_56C590(int, int);
extern "C" void __stdcall sub_446110(void*, void*);
extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void __stdcall sub_64D530(void*, int, int);

void RBX_Feature_W4InOut_EnumDesc::construct()
{
    char local1;
    char local2;
    void* p;

    sub_56C590(0x95a3cc, 0x842f84);

    *(int*)this = 0x842f5c;

    sub_446110((char*)this + 0x30, &local1);
    sub_446110((char*)this + 0x50, &local2);

    p = sub_6A0920(4);
    if (p != 0)
        *(void**)p = (char*)this + 0x70;
    else
        p = 0;
    *(void**)((char*)this + 0x70) = p;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0x84) = 0;

    p = sub_6A0920(4);
    if (p != 0)
        *(void**)p = (char*)this + 0x88;
    else
        p = 0;
    *(void**)((char*)this + 0x88) = p;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 0;

    p = sub_6A0920(4);
    if (p != 0)
        *(void**)p = (char*)this + 0xa0;
    else
        p = 0;
    *(void**)((char*)this + 0xa0) = p;
    *(int*)((char*)this + 0xac) = 0;
    *(int*)((char*)this + 0xb0) = 0;
    *(int*)((char*)this + 0xb4) = 0;

    p = sub_6A0920(4);
    if (p != 0)
        *(void**)p = (char*)this + 0xb8;
    else
        p = 0;
    *(void**)((char*)this + 0xb8) = p;
    *(int*)((char*)this + 0xc4) = 0;
    *(int*)((char*)this + 0xc8) = 0;
    *(int*)((char*)this + 0xcc) = 0;

    p = sub_6A0920(4);
    if (p != 0)
        *(void**)p = (char*)this + 0xd0;
    else
        p = 0;
    *(void**)((char*)this + 0xd0) = p;
    *(int*)((char*)this + 0xdc) = 0;
    *(int*)((char*)this + 0xe0) = 0;
    *(int*)((char*)this + 0xe4) = 0;

    sub_64D530(this, 0, 0x81e504);
    sub_64D530(this, 1, 0x842f7c);
    sub_64D530(this, 2, 0x82f790);
}
