// from server: 42% by colin
struct VPlayerSignalDesc
{
    char pad0[0xc];
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    char field_1c;
    char pad1[3];
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    char field_30;
    char pad2[3];

    void construct(int a, int b, int c, int d, int e, int f, int g, int h);
};

extern "C" void __stdcall sub_489940(void* dst, void* src);
extern "C" void __stdcall sub_489730(void* p);
extern "C" void __stdcall sub_4893c0(void* a, void* b, void* c, void* d, void* e);
extern "C" void __stdcall sub_62fc62(void* p);
extern "C" void __stdcall sub_490680(void* p);

void VPlayerSignalDesc::construct(int a, int b, int c, int d, int e, int f, int g, int h)
{
    char local[0x10];
    int v1;
    int v2;
    int v3;
    int v4;

    sub_489940(local, &a);
    *(int*)(local + 0xc) = h;

    sub_490680(this);

    v1 = *(int*)(local + 0);
    v2 = *(int*)(local + 4);
    v3 = *(int*)(local + 8);
    v4 = *(int*)(local + 0xc);

    field_c = v1;
    field_10 = v2;
    field_14 = v1;
    field_18 = v2;
    field_1c = 0;
    field_20 = v1;
    field_24 = v2;
    field_28 = v3;
    field_2c = v4;
    field_30 = 0;

    sub_489730(this);

    {
        int tmp = a;
        int* p = (int*)tmp;
        int val = *p;
        sub_4893c0(&tmp, &val, p, &tmp, &val);
        sub_62fc62((void*)tmp);
    }
}
