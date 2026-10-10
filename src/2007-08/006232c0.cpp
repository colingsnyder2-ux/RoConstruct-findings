// from server: 86% by colin
struct ArrowPanel {
    char pad[0x114];
    void* field114;
    int field118;
    unsigned char getSomething();
};

struct Dummy {
    void func(void*);
};

unsigned char ArrowPanel::getSomething()
{
    int local1;
    int local2;
    void* p = *(void**)((char*)field114 + 0x188);
    ((Dummy*)((char*)p + 0x240))->func(&local1);
    int arr[2];
    arr[0] = local1;
    arr[1] = local2;
    return ((unsigned char*)arr)[field118];
}
