// from server: 45% by colin
struct MarshaledListenerEventData
{
    void* vtable;
    int field_04;
    int field_08;
    int field_0c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    void destroy();
};

extern "C" void __cdecl sub_00457710();
extern "C" void __cdecl sub_00432bd0(void*);
extern "C" void __cdecl sub_006a067a(void*);

void MarshaledListenerEventData::destroy()
{
    this->vtable = (void*)0x81b368;
    sub_00457710();
    sub_00432bd0((void*)this->field_20);
    if (this->field_10 != 0)
    {
        sub_006a067a((void*)this->field_10);
    }
    void* p = (void*)this->field_04;
    this->field_10 = 0;
    this->field_14 = 0;
    this->field_18 = 0;
    sub_006a067a(p);
}
