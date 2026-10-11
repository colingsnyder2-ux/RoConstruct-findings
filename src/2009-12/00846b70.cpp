// from server: 35% by atomic.potato
extern "C" void __cdecl sub_926442();
extern "C" void __cdecl sub_926448();
extern "C" void __cdecl sub_7f7880();

struct CXTPControls
{
    void* vftable;      // 0x00
    char pad_04[0x1c];  // 0x04
    int field_20;       // 0x20
    char field_24[0x14];// 0x24
    int field_38;       // 0x38
    int field_3c;       // 0x3c
    int field_40;       // 0x40

    CXTPControls();
};

CXTPControls::CXTPControls()
{
    sub_926442();
    this->vftable = (void*)0x9fa5fc;
    sub_7f7880();
    sub_926448();
    this->field_20 = 0;
    this->field_38 = 0;
    this->field_3c = 0;
    this->field_40 = 0;
}
