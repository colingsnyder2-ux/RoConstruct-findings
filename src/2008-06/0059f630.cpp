// from server: 41% by colin




extern "C" void __stdcall sub_56C590(int, int);
extern "C" void __stdcall sub_446110(int, int);
extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" void __stdcall sub_64D530(int, int, int);

struct S {
    char pad0[0x30];
    char pad30[0x20];
    char pad50[0x20];
    char pad70[0x18];
    char pad88[0x18];
    char pada0[0x18];
    char padb8[0x18];
    char padd0[0x18];
    void ctor(int a, int b);
};

void S::ctor(int a, int b)
{
    sub_56C590(0x94b400, 0x833394);
    *(int*)this = 0x83335c;
    sub_446110((int)this + 0x30, (int)this + 0x30);
    sub_446110((int)this + 0x50, (int)this + 0x50);

    void* p;
    p = sub_6A0920(4);
    if (p) *(void**)p = (char*)this + 0x70;
    else p = 0;
    *(void**)((char*)this + 0x70) = p;
    *(int*)((char*)this + 0x7c) = 0;
    *(int*)((char*)this + 0x80) = 0;
    *(int*)((char*)this + 0x84) = 0;

    p = sub_6A0920(4);
    if (p) *(void**)p = (char*)this + 0x88;
    else p = 0;
    *(void**)((char*)this + 0x88) = p;
    *(int*)((char*)this + 0x94) = 0;
    *(int*)((char*)this + 0x98) = 0;
    *(int*)((char*)this + 0x9c) = 0;

    p = sub_6A0920(4);
    if (p) *(void**)p = (char*)this + 0xa0;
    else p = 0;
    *(void**)((char*)this + 0xa0) = p;
    *(int*)((char*)this + 0xac) = 0;
    *(int*)((char*)this + 0xb0) = 0;
    *(int*)((char*)this + 0xb4) = 0;

    p = sub_6A0920(4);
    if (p) *(void**)p = (char*)this + 0xb8;
    else p = 0;
    *(void**)((char*)this + 0xb8) = p;
    *(int*)((char*)this + 0xc4) = 0;
    *(int*)((char*)this + 0xc8) = 0;
    *(int*)((char*)this + 0xcc) = 0;

    p = sub_6A0920(4);
    if (p) *(void**)p = (char*)this + 0xd0;
    else p = 0;
    *(void**)((char*)this + 0xd0) = p;
    *(int*)((char*)this + 0xdc) = 0;
    *(int*)((char*)this + 0xe0) = 0;
    *(int*)((char*)this + 0xe4) = 0;

    sub_64D530((int)this, 0, 0x83338c);
    sub_64D530((int)this, 1, 0x832a1c);
    sub_64D530((int)this, 2, 0x833384);
    sub_64D530((int)this, 6, 0x832ddc);
    sub_64D530((int)this, 3, 0x83337c);
    sub_64D530((int)this, 4, 0x833370);
    sub_64D530((int)this, 5, 0x833364);
}
