// from server: 61% by atomic.potato
struct RBX_ViewG3D_ctor
{
    void* vftable;
    int field_4;
    float field_8;
    float field_c;
    float field_10;
    int field_14;
    int field_18;
    int field_1c;
    char field_20;
    char pad_21[3];
    int field_24;
    void construct(int a, float b, float c, float d, int e, int f, int g, char h, int i);
};

void RBX_ViewG3D_ctor::construct(int a, float b, float c, float d, int e, int f, int g, char h, int i)
{
    field_4 = a;
    field_8 = b;
    field_c = c;
    field_10 = d;
    field_14 = e;
    field_18 = f;
    field_1c = g;
    field_20 = h;
    vftable = (void*)0x8ca21c;
    field_24 = i;
}
