// from server: 35% by colin
extern "C" {
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

extern int G1_00632910();
extern int G1_006a0440();
extern int G1_0062fe2a();
extern int G1_00631aa0();
extern int G1_0040a770();
extern int G1_0040a790();
extern int G1_00631ad0();
extern int G1_00738cdc();
extern int G1_006761e0();
extern int G1_006364b0();
extern int G1_00630412();

struct CXTPCustomizeToolbarsPage {
    char pad0[0x88];
    void* field_88;
    char pad8c[0x20];
    void* field_ac;
    int method();
};

int CXTPCustomizeToolbarsPage::method()
{
    int handle = SendMessageA(field_ac, 0x188, 0, 0);
    if (handle == -1)
        return 0;

    void* p = field_88;
    int count = *(int*)((char*)p + 0xb8);
    int idx = SendMessageA(field_ac, 0x199, handle, 0);
    if (idx < 0 || idx >= count)
        return 0;

    int item = G1_00632910();
    if (*(int*)((char*)item + 0x188) != 0)
        return 0;

    G1_006a0440();
    if (G1_0062fe2a() == 1)
    {
        G1_00631aa0();
        G1_0040a770();
        G1_00631ad0();
        G1_0040a790();
        G1_00631ad0();
        G1_00738cdc();
        G1_006761e0();
        G1_006364b0();
    }
    G1_00630412();
    return 0;
}
