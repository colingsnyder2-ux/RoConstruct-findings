// from server: 33% by colin
struct CXTPAccessible {
    void* vtable;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    char pad14[0x24];
    int field38;
    void construct();
};

extern "C" void __stdcall sub_671240(void* p);
extern "C" void __stdcall sub_671310(void* p1, void* p2, void* p3);
extern "C" void __stdcall sub_671F80(void* p1, void* p2);

void CXTPAccessible::construct()
{
    this->vtable = (void*)0x7cb68c;
    this->field4 = (void*)0x7cb794;
    sub_671240((char*)this + 0x14);
    sub_671240((char*)this + 0x38);
    sub_671F80((char*)this + 0x14, (void*)0x7cb824);
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    sub_671310((char*)this + 0x14, (void*)0x7cb814, 0);
}
