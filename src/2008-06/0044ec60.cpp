// from server: 55% by colin
struct CRobloxControlColorSelector
{
    char pad0[0x20];
    int field_20;
    char pad1[0x174 - 0x24];
    int field_174;
    int field_178;
    unsigned char field_17c;
    char pad2[3];
    int field_180;
    void sub_6adad0();
    void sub_6ab360(int);
    void sub_44ec60();
};

extern int g_96dd30;
extern int g_96dd34;
extern void* g_802890;

void* __cdecl sub_5b5c80();
void __cdecl sub_44eb90(int);

void CRobloxControlColorSelector::sub_44ec60()
{
    sub_6adad0();
    field_17c = 0;
    *(int*)this = 0x816e74;
    *(int*)((char*)this + 0x20) = 0x816e14;

    int count = (g_96dd34 - g_96dd30) / 12;
    if (count == 0)
    {
        void* a = sub_5b5c80();
        int* end = *(int**)((char*)a + 0x10);
        void (__stdcall* inval)(void) = (void (__stdcall*)(void))g_802890;
        if (*(int**)((char*)a + 0xc) > end)
            inval();
        void* b = sub_5b5c80();
        int* it = *(int**)((char*)b + 0xc);
        if (it > *(int**)((char*)b + 0x10))
            inval();
        while (it != end)
        {
            sub_44eb90(*it);
            it++;
        }
    }

    field_174 = -1;
    field_180 = -1;
    sub_6ab360(0x10);
    field_178 = -1;
}
