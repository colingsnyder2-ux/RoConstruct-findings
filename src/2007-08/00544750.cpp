// from server: 43% by colin
struct EnumPropDescriptor {
    void* field_00;
    void* field_04;
    void* field_08;
    void* field_0c;
    void* field_10;
    void* field_14;
    char pad_18[0x14];
    void* field_2c;
    char pad_30[0x14];
    void* field_44;
    char pad_48[0x14];
    void* field_5c;
    char pad_60[0x14];
    void* field_74;
    char pad_78[0x14];
    void* field_8c;
    void construct();
};

extern "C" void __stdcall sub_542E20();
extern "C" void* __stdcall sub_543C80();

void EnumPropDescriptor::construct()
{
    sub_542E20();
    field_0c = 0;
    field_00 = (void*)0x7a6aec;
    field_04 = (void*)0x7a6ae0;
    field_10 = (void*)0x7a6ad8;
    field_14 = (void*)0x7a6ac8;
    field_2c = (void*)0x7a6ab8;
    field_44 = (void*)0x7a6aa8;
    field_5c = (void*)0x7a6a98;
    field_74 = (void*)0x7a6a88;
    field_8c = (void*)0x7a6a78;
    field_0c = sub_543C80();
}
