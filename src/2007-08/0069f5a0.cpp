// from server: 50% by colin
struct CXTColorSelectorCtrl
{
    char pad0[0x54];
    char field_54[0x7c];
    int field_7c;
    char field_80;
    char field_81;
    char pad82[0x0a];
    int field_8c;
    int field_90;
    int field_94;
    char pad98[0x34];
    int field_cc;
    char padD0[0xbc];
    int field_18c;
};

extern "C" void __stdcall sub_77DDAC();
extern "C" void __stdcall sub_77DD6C(const char*);
extern "C" int __stdcall sub_77EE58(int);

void sub_6305DA();
void sub_6304C0();
void sub_692160();
void sub_69F1E0();
void sub_69F1A0();
int sub_6978F0();

CXTColorSelectorCtrl* CXTColorSelectorCtrl_ctor(CXTColorSelectorCtrl* self);

CXTColorSelectorCtrl* CXTColorSelectorCtrl_ctor(CXTColorSelectorCtrl* self)
{
    sub_6305DA();
    *(int*)self = 0x7cc674;
    *(int*)((char*)self + 0x54) = 0;
    sub_69F1E0();
    sub_692160();
    *(int*)((char*)self + 0x54) = 0x7d2e84;
    *(int*)self = 0x7d2e94;
    sub_77DDAC();
    sub_6304C0();
    sub_69F1A0();
    sub_77DD6C((const char*)0x785954);
    *(char*)((char*)self + 0x81) = 0;
    *(char*)((char*)self + 0x80) = 0;
    *(int*)((char*)self + 0xcc) = 0;
    *(int*)((char*)self + 0x84) = 0;
    *(int*)((char*)self + 0x88) = 0;
    *(int*)((char*)self + 0x8c) = 0;
    *(int*)((char*)self + 0x18c) = 0;
    *(int*)((char*)self + 0x7c) = 0;
    *(int*)((char*)self + 0x6c) = 0;
    int v = sub_6978F0();
    if (*(int*)(v + 0xc0) < 0x10)
        *(int*)((char*)self + 0x90) = *(int*)(v + 0xc0);
    else
        *(int*)((char*)self + 0x90) = 0x10;
    v = sub_6978F0();
    if (*(int*)(v + 0xc4) < 0x10)
        *(int*)((char*)self + 0x94) = *(int*)(v + 0xc4);
    else
        *(int*)((char*)self + 0x94) = 0x10;
    *(int*)((char*)self + 0xc8) = 0;
    *(int*)((char*)self + 0x78) = sub_77EE58(0x12);
    *(int*)((char*)self + 0x70) = sub_77EE58(0xf);
    *(int*)((char*)self + 0x74) = sub_77EE58(0xf);
    return self;
}
