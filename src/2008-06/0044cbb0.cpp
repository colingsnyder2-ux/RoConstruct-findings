// from server: 8% by colin
struct S {
    void f();
};

extern "C" void* __cdecl sub_4060d0(void*);
extern "C" void* __cdecl sub_40e160(void*, const char*, void*);
extern "C" void* __cdecl sub_407be0();
extern "C" void* __cdecl sub_412d50();
extern "C" void __cdecl sub_44bff0(void*, void*, void*, void*, void*, void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_569a40(void*, int, void*);

extern "C" void* __stdcall imp_803ee0();
extern "C" void __stdcall imp_802458(void*, void*);
extern "C" void __stdcall imp_803f14(void*);
extern "C" void __stdcall imp_802460(void*);
extern "C" void __stdcall imp_802428(void*, int, int);
extern "C" void __stdcall imp_802890();
extern "C" void __stdcall imp_8023bc(void*);
extern "C" void __stdcall imp_80245c(void*, void*);
extern "C" void __stdcall imp_802468(void*);
extern "C" void __stdcall imp_80242c(void*);

void S::f()
{
    char buf[0x100];
    char* p = buf;

    sub_4060d0(p + 0x3c);
    sub_40e160(p + 0x38, (const char*)0x816c04, p + 0x3c);
    imp_803ee0();
    imp_802458(p, p);
    imp_803f14(p + 0x38);
    imp_803f14(p + 0x3c);
    imp_802460(p + 0x1c);
    imp_802428(p - 0xd0, 3, 1);

    void* a = sub_407be0();
    void* a1 = *(void**)((char*)a + 0x1c);
    void* a2 = *(void**)((char*)a1 + 0x18);
    void* a3 = (char*)a + 0x14;
    *(void**)(p + 0x44) = (void*)0x816bfc;
    *(void**)(p + 0x48) = p - 0xd0;
    if (*(unsigned*)((char*)a1 + 0x14) > (unsigned)a2) imp_802890();
    void* a4 = *(void**)((char*)a1 + 8);
    void* a5 = *(void**)((char*)a3 + 8);
    *(void**)(p + 0x54) = a2;
    void* a6 = *(void**)((char*)a5 + 0x14);
    *(void**)(p + 0x50) = a4;
    if ((unsigned)a6 > *(unsigned*)((char*)a5 + 0x18)) imp_802890();
    void* a7 = *(void**)((char*)a5 + 8);

    void* args1[3];
    args1[0] = (void*)0x44ac80;
    args1[1] = *(void**)(p + 0x44);
    args1[2] = *(void**)(p + 0x48);
    void* args2[3];
    args2[0] = a3;
    args2[1] = *(void**)(p + 0x50);
    args2[2] = *(void**)(p + 0x54);
    void* args3[3];
    args3[0] = a3;
    args3[1] = a7;
    args3[2] = a6;
    sub_44bff0(p + 0x4c, args1, args2, args3, 0, 0, 0, 0, 0, 0);

    void* b = sub_412d50();
    void* b1 = *(void**)((char*)b + 0x1c);
    void* b2 = *(void**)((char*)b1 + 0x18);
    void* b3 = (char*)b + 0x14;
    *(void**)(p + 0x40) = (void*)0x44ac80;
    *(void**)(p + 0x44) = (void*)0x8163c4;
    *(void**)(p + 0x48) = p - 0xd0;
    if (*(unsigned*)((char*)b1 + 0x14) > (unsigned)b2) imp_802890();
    void* b4 = *(void**)((char*)b1 + 8);
    void* b5 = *(void**)((char*)b3 + 8);
    *(void**)(p + 0x54) = b2;
    void* b6 = *(void**)((char*)b5 + 0x14);
    *(void**)(p + 0x50) = b4;
    if ((unsigned)b6 > *(unsigned*)((char*)b5 + 0x18)) imp_802890();
    void* b7 = *(void**)((char*)b5 + 8);

    void* cargs1[3];
    cargs1[0] = *(void**)(p + 0x40);
    cargs1[1] = *(void**)(p + 0x44);
    cargs1[2] = *(void**)(p + 0x48);
    void* cargs2[3];
    cargs2[0] = b3;
    cargs2[1] = *(void**)(p + 0x50);
    cargs2[2] = *(void**)(p + 0x54);
    void* cargs3[3];
    cargs3[0] = b3;
    cargs3[1] = b7;
    cargs3[2] = b6;
    sub_44bff0(p + 0x4c, cargs1, cargs2, cargs3, 0, 0, 0, 0, 0, 0);

    imp_8023bc(p - 0xc8);
    imp_80245c(p - 0x48, p);
    imp_802460(p - 0x2c);
    sub_569a40(p - 0x48, 0, p - 0xd0);
    imp_802468(p - 0x2c);
    imp_802468(p - 0x48);
    imp_80242c(p - 0xd0);
    imp_802468(p + 0x1c);
    imp_802468(p);
}
