// from server: 83% by colin
struct CXTPPropertyGridItemBool
{
    char pad_0000[0x20];
    void* vtable_20;
    char pad_0024[0x108 - 0x24];
    void* field_108;
    void* field_10c;
    void sub_69a150();
    void sub_69dd50();
};

extern "C" void __stdcall sub_77ddbc(void*);

void CXTPPropertyGridItemBool::sub_69dd50()
{
    this->vtable_20 = (void*)0x7d2494;
    *(void**)this = (void*)0x7d24f4;
    sub_77ddbc(&this->field_10c);
    sub_77ddbc(&this->field_108);
    this->sub_69a150();
}
