// from server: 13% by colin
struct Str_00437ed0 { int words[8]; };

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0* out);
};

extern "C" int __stdcall sub_802ff0(int, const char*);
extern "C" void __stdcall sub_803f14(Str_00437ed0*);
extern "C" void __stdcall sub_713c20(void*, int, int, int, int, int);

struct XBrickColorItem {
    int method(int a1, int a2, int a3, int a4, int a5);
};

int XBrickColorItem::method(int a1, int a2, int a3, int a4, int a5)
{
    Str_00437ed0 local;
    X_00437ed0* p = (X_00437ed0*)((char*)this + 0);
    p->copy(&local);
    int r = sub_802ff0(0, (const char*)0x80b716);
    sub_803f14(&local);
    if (r == 0)
        return 0;
    sub_713c20(this, a1, a2, a3, a4, a5);
    return 0;
}
