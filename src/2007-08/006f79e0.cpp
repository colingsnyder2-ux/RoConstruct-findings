// from server: 62% by colin
struct CXTMaskEditT {
    char pad[0x64];
    int field64;
    int field68;
    char pad2[0x4];
    char field70[0x10];
    char field80[0x4];
    char field84[0x10];
    int method(int, int, int);
};

extern "C" {
    int __stdcall sub_77DD6C(void*, const char*);
    int __stdcall sub_77DCC8(void*);
    int __stdcall sub_77D434(void*, const char*);
    int __stdcall sub_77DD98(void*);
    int __stdcall sub_630016(void*, const char*);
    int __stdcall sub_6F7300(void*, const char*);
}

int CXTMaskEditT::method(int a, int b, int c)
{
    sub_77DD6C(field70, (const char*)a);
    sub_77DD6C(field84, (const char*)b);
    int v1 = sub_77DCC8(field84);
    int v2 = sub_77DCC8(field70);
    if (v2 != v1)
        return 0;
    if (c == 0) {
        sub_77DD6C(field70 + 4, (const char*)b);
        sub_77D434(field80, (const char*)field70 + 4);
    } else {
        sub_77DD6C(field70 + 4, (const char*)c);
        sub_77D434(field80, (const char*)field70 + 4);
        int v3 = sub_77DCC8(field70 + 4);
        int v4 = sub_77DCC8(field84);
        if (v4 != v3) {
            sub_77DD98(field70 + 4);
            sub_6F7300(this, (const char*)field70 + 4);
            sub_77D434(field70 + 4, (const char*)field80);
        }
    }
    field64 = 0;
    field68 = 0;
    sub_630016(this, (const char*)sub_77DD98(field80));
    sub_77D434(field70 + 8, (const char*)field80);
    return 1;
}
