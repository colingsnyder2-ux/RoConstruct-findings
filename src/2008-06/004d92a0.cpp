// from server: 49% by colin
struct VRenderSurfaceTypesTable {
    void* vtable;
    int field_4;
    int* field_8;
    int field_c;
    char field_10[12];
    char field_1c[32];
    char field_3c[32];
    int field_5c;
    VRenderSurfaceTypesTable();
};

extern "C" void* __cdecl sub_508580(int, int);
extern "C" void __cdecl sub_508A30(void*, int, int);
extern "C" void __cdecl sub_563070(void*);
extern "C" void __cdecl sub_4F0FC0(void*, void*, void*);
extern "C" void __cdecl sub_4D8680(void*, void*, void*);

VRenderSurfaceTypesTable::VRenderSurfaceTypesTable()
{
    char local1;
    char local2;
    this->vtable = (void*)0x826b8c;
    this->field_c = 10;
    this->field_4 = 0;
    this->field_8 = (int*)sub_508580(0x28, 0x10);
    sub_508A30(this->field_8, 0, this->field_c * 4);
    sub_563070(&this->field_10[0]);
    sub_4F0FC0(&this->field_1c[0], &local1, &local2);
    sub_4D8680(&this->field_3c[0], &local1, &local2);
    this->field_5c = 0;
}
