// from server: 48% by colin
struct CArray {
    void* vfptr;              // 0x00
    char pad04[0x1c];         // 0x04
    int field20;              // 0x20
    int field24;              // 0x24
    int field28;              // 0x28
    int field2c;              // 0x2c
    int field30;              // 0x30
    int field34;              // 0x34
    int field38;              // 0x38
    int field3c;              // 0x3c
    int field40;              // 0x40
    char field44[0x10];       // 0x44
    char field54[4];          // 0x54
    char field58[0x14];       // 0x58
    int field6c;              // 0x6c
    char pad70[0x10];         // 0x70
    int field80;              // 0x80

    CArray();
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_738334();
extern "C" void __stdcall sub_6fe090();
extern "C" void __stdcall SetRectEmpty(void*);
extern "C" void __stdcall sub_77ddac();

CArray::CArray()
{
    sub_73833a();
    this->vfptr = (void*)0x7dce74;
    sub_77ddac();
    sub_77ddac();
    sub_6fe090();
    sub_738334();
    this->field2c = -1;
    this->field28 = -1;
    this->field34 = 1;
    this->field30 = 1;
    this->field3c = 0;
    this->field38 = 0;
    *(int*)(this->field58 + 4) = 0;
    this->field40 = 0;
    SetRectEmpty(this->field44);
    *(int*)(this->field58 + 0xc) = 0;
    this->field24 = 0;
    this->field20 = 0;
    *(int*)(this->field58 + 0x10) = 1;
    *(int*)(this->field58 + 8) = 0;
    this->field80 = 0;
}
