// from server: 38% by colin
struct CMap
{
    void* vftable;      // +0x00
    char  pad[0x1c];    // +0x04 .. +0x1f
    void* field20;      // +0x20
    void* field24;      // +0x24
    void* field28;      // +0x28
    void* field2c;      // +0x2c
    void* field30;      // +0x30
    void* field34;      // +0x34
    void* field38;      // +0x38

    CMap(void* arg);
};

extern "C" void __stdcall sub_73833a();
extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void* __fastcall sub_6a5720(void*);

CMap::CMap(void* arg)
{
    sub_73833a();
    this->vftable = (void*)0x7d3c3c;
    this->field2c = arg;
    this->field30 = 0;
    this->field34 = 0;
    this->field20 = 0;
    this->field24 = 0;
    void* p = sub_62fef6(0x1c);
    if (p != 0)
    {
        p = sub_6a5720(p);
    }
    else
    {
        p = 0;
    }
    this->field38 = p;
    this->field28 = 0;
}
