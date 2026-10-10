// from server: 44% by colin
struct GuiItem {
    void construct();
};

struct GuiRoot : GuiItem {
    char pad[0xfc];
    float field_fc;
    float field_100;
    float field_104;
    float field_108;
    unsigned char field_110;
    int field_10c;

    GuiRoot(int a, int b, int c);
};

extern float g_7a8340;
extern float g_8c1e40;
extern float g_8c1e44;
extern float g_8c1e48;
extern float g_8c1e4c;
extern unsigned int g_8c1e50;

extern float* __cdecl getVector3();

void __stdcall sub_541bf0(int);

GuiRoot::GuiRoot(int a, int b, int c)
{
    construct();

    field_10c = 0;

    *(void**)((char*)this + 0) = (void*)0x7a85ec;
    *(void**)((char*)this + 4) = (void*)0x7a85e0;
    *(void**)((char*)this + 0x10) = (void*)0x7a85d8;
    *(void**)((char*)this + 0x14) = (void*)0x7a85c8;
    *(void**)((char*)this + 0x2c) = (void*)0x7a85b8;
    *(void**)((char*)this + 0x44) = (void*)0x7a85a8;
    *(void**)((char*)this + 0x5c) = (void*)0x7a8598;
    *(void**)((char*)this + 0x74) = (void*)0x7a8588;
    *(void**)((char*)this + 0x8c) = (void*)0x7a8578;
    *(void**)((char*)this + 0xe8) = (void*)0x7a8570;
    *(void**)((char*)this + 0x10c) = 0;

    float* v = getVector3();
    field_fc = v[0];
    field_100 = v[1];
    field_104 = v[2];
    field_108 = v[3];

    field_110 = 1;

    sub_541bf0(c);

    field_10c = b;

    if (a != 0) {
        if ((g_8c1e50 & 1) == 0) {
            g_8c1e50 |= 1;
            g_8c1e40 = g_7a8340;
            g_8c1e44 = g_7a8340;
            g_8c1e48 = g_7a8340;
            g_8c1e4c = g_7a8340;
        }
        field_fc = g_8c1e40;
        field_100 = g_8c1e44;
        field_104 = g_8c1e48;
        field_108 = g_8c1e4c;
    }
}
