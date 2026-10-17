// from server: 43% by colin




extern "C" void* __stdcall sub_802458(void*);
extern "C" void __stdcall sub_802468(void*);
extern "C" void __stdcall sub_802890();
extern "C" void __stdcall sub_803f10(void*);
extern "C" void __stdcall sub_803f14(void*);
extern "C" void __stdcall sub_6a96f0(int, void*);

struct CBrowserView {
    void sub_6a0b66(int);
    void sub_410ea0(int);
    char pad[0xfc];
    int field_fc;
    int field_100;
    int field_104;
    int field_108;
    int field_10c;
    int field_110;
    int field_114;
    int field_118;
};

struct Str {
    char buf[0x1c];
    Str(const char*);
    ~Str();
};

struct Iter {
    int* first;
    int* second;
};

extern "C" Iter* __cdecl sub_410bd0(Iter* out, int a, int b, int c, int d, int e);

void CBrowserView::sub_410ea0(int arg) {
    sub_6a0b66(arg);
    if (field_118 == 0)
        return;
    Str s("");
    int v1 = field_fc;
    int v2 = field_110;
    int v3 = field_fc;
    Iter it;
    Iter* r = sub_410bd0(&it, v3, v2, *(int*)v2, v1, (int)&s);
    int* p = r->first;
    if (p == 0 || p != (int*)v1) {
        sub_802890();
    }
    bool eq = (r->second == (int*)v2);
    sub_802468(&s);
    if (!eq)
        return;
    int tmp = arg;
    sub_803f10(&tmp);
    sub_6a96f0(field_118, &tmp);
    sub_803f14(&tmp);
}
