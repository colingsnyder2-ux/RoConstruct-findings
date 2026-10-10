// from server: 57% by colin
struct CXTPPropertyGridItemConstraints
{
    char pad[0x7c];
    int field_0x7c;
    int field_0x80;
    int field_0x84;
    int field_0x88;
    int field_0x8c;
    int field_0x90;
    int field_0x94;
    int field_0x98;
    int field_0x9c;
    char field_0xa0[0x10];
    int field_0xb0;
    int field_0xb4;
    int field_0xb8;
    int field_0xbc;
    int field_0xc0;
    int field_0xc4;
    int field_0xc8;
    int field_0xcc;
    int field_0xd0;
    int field_0xd4;
    char pad2[0x10];
    char field_0xe4;
    char field_0xe5;
    int field_0xe8;
    int field_0xec;
    int field_0xf0;
    int field_0xf4;
    int field_0xf8;
    int field_0xfc;

    CXTPPropertyGridItemConstraints();
};

extern "C" void* __stdcall sub_62FEF6(unsigned int size);
extern "C" void __stdcall sub_77DD6C(void* p);
extern "C" void __stdcall sub_738334();

void* __fastcall sub_699870(void* self, void* parent);
void* __fastcall sub_6F5FD0(void* self, void* parent);
void* __fastcall sub_6F7140(void* self);
void* __fastcall sub_699710(void* self);

CXTPPropertyGridItemConstraints::CXTPPropertyGridItemConstraints()
{
    field_0xf0 = 0;
    field_0x9c = 0;
    field_0x80 = -1;
    field_0x94 = 0;
    field_0xb0 = 0;
    field_0xb4 = 0;
    field_0x84 = 0;
    sub_77DD6C(&field_0xa0);
    field_0x90 = 0;
    field_0x98 = 0;
    field_0x88 = 0;
    field_0x8c = 1;

    void* p1 = sub_62FEF6(0x3c);
    if (p1 != 0)
        field_0xbc = (int)sub_699870(p1, this);
    else
        field_0xbc = 0;

    void* p2 = sub_62FEF6(0x38);
    if (p2 != 0)
        field_0xc8 = (int)sub_6F5FD0(p2, this);
    else
        field_0xc8 = 0;

    void* p3 = sub_62FEF6(0x14);
    if (p3 != 0)
        field_0xcc = (int)sub_6F7140(p3);
    else
        field_0xcc = 0;

    *(int*)(field_0xbc + 0x34) = -1;
    field_0xd4 = 0;
    field_0x7c = 0;
    field_0xf8 = 1;
    field_0xf4 = -1;
    field_0xd0 = 0xa;
    field_0xe5 = 0;
    field_0xe8 = 0;
    field_0xe4 = 0x2a;
    field_0xec = 0;
    field_0xfc = 0;
    sub_738334();
    field_0xc0 = 0;
    field_0xc4 = 0;

    void* p4 = sub_62FEF6(0x34);
    if (p4 != 0)
        field_0xb8 = (int)sub_699710(p4);
    else
        field_0xb8 = 0;
}
