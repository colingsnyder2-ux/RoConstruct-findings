// from server: 47% by colin
struct S {
    char pad[0x3c];
    char field_3c;
    char pad2[7];
    char field_44;
    int field_48;
    int field_4c;
    int field_50;
    int field_54;
    int field_58;
    void* field_0;
    void* construct(int, int, int);
};

extern "C" void __stdcall sub_802548();
extern "C" void __fastcall sub_5f33a0(S* self, int, int*, int);

void* S::construct(int a, int b, int c)
{
    sub_802548();
    field_3c = 0;
    field_44 = 0;
    field_48 = 0;
    field_4c = 0;
    field_50 = 0;
    field_54 = 0;
    field_58 = 0x10;
    field_0 = (void*)0x840a14;
    int tmp = *(int*)a;
    sub_5f33a0(this, b, &tmp, c);

    return this;
}
