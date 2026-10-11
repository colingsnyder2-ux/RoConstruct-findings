// from server: 35% by colin
struct CXTPReportColumnOrder
{
    void* vftable;
    char pad[0x1c];
    void* field20;
    void* field24;
    void* field28;
    char pad2[0x10];
    int field3c;
    int field40;

    CXTPReportColumnOrder(int arg);
};

extern "C" void __stdcall sub_7bbfaa();
extern "C" void __stdcall sub_74fbb0();
extern "C" void* __stdcall sub_6a0920(unsigned int size);
extern "C" void* __stdcall sub_750050(void* self, void* arg);

CXTPReportColumnOrder::CXTPReportColumnOrder(int arg)
{
    sub_7bbfaa();
    this->vftable = (void*)0x864604;
    sub_74fbb0();
    this->field3c = arg;
    void* p1 = sub_6a0920(0x38);
    if (p1 != 0)
        p1 = sub_750050(p1, this);
    else
        p1 = 0;
    this->field20 = p1;
    void* p2 = sub_6a0920(0x38);
    if (p2 != 0)
        p2 = sub_750050(p2, this);
    else
        p2 = 0;
    this->field24 = p2;
    this->field40 = 0;
}
