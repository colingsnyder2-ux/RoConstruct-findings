// from server: 45% by tester
struct BackpackItem {
    char pad0[0x18];
    int field18;
    int field1c;
    int field20;
    int construct(int, int, int, int, int, int, int);
};

extern "C" void __stdcall sub_557330(int, int);
extern "C" int __cdecl sub_5d0300();
extern "C" int __cdecl sub_5d0420();
extern "C" void __stdcall sub_6a067a(int);
extern "C" int __cdecl sub_5cfaa0(int*);

int BackpackItem::construct(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    sub_557330(0x979cb4, 0x5d0360);
    int v = sub_5d0300();
    sub_5d0420();
    int r = ((int (__thiscall*)(BackpackItem*, int, int, int, int, int))0x56c650)(this, v, a1, a2, a3, a4);
    (void)r;
    this->field18 = v;
    int tmp = 0;
    int* p = (int*)sub_5cfaa0(&tmp);
    int val = *p;
    *p = 0;
    this->field1c = val;
    if (a7) {
        sub_6a067a(a7);
    }
    sub_557330(0x979cb4, 0x5d0360);
    this->field20 = sub_5d0300();
    return (int)this;
}
