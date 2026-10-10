// from server: 38% by colin
struct Shirt {
    char pad[0x108];
    int field_108;
    int field_10c;
    int field_110;
    char pad2[0x1c];
    int field_12c;
    void setTemplate(int value);
    void apply();
};

extern "C" {
    int __stdcall sub_5A5C60(int);
    int __stdcall sub_5A1960(int);
    int __stdcall sub_5A5F60(int);
    int __stdcall sub_5A6060(int);
    void __stdcall sub_5784B0(int, int);
    void __stdcall sub_573040(int, int);
    void __stdcall sub_77E69C(int, int);
}

void Shirt::apply()
{
    int v = sub_5A5C60(*(int*)((char*)this + 0x108));
    if (v != 0) {
        int r = sub_5A1960(v);
        if (r != 0) {
            char buf[0x20];
            sub_77E69C((int)buf, (int)((char*)this + 0xe8));
            *(int*)(buf + 0x1c) = *(int*)((char*)this + 0x104);
            sub_573040(r, (int)buf);
        }
    }
    int v2 = sub_5A5C60(*(int*)((char*)this + 0x108));
    if (v2 != 0) {
        sub_5784B0(v2, *(int*)((char*)this + 0x110));
    }
    int v3 = sub_5A5F60(*(int*)((char*)this + 0x108));
    if (v3 != 0) {
        sub_5784B0(v3, *(int*)((char*)this + 0x108));
    }
    int v4 = sub_5A6060(*(int*)((char*)this + 0x108));
    if (v4 != 0) {
        sub_5784B0(v4, *(int*)((char*)this + 0x10c));
    }
}
