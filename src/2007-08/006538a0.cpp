// from server: 47% by colin
struct CNameItem {
    char pad0[0x40];
    void* field_40;
    char pad44[0x04];
    void* field_48;
    char pad4c[0x10];
    void* field_5c;
    void* field_60;
    char pad64[0x10];
    void* field_74;
    void* field_78;
    void dtor();
};

extern "C" void __stdcall sub_6301e4(void*);
extern "C" void __stdcall sub_63069a(void*);
extern "C" void __stdcall sub_77ddbc(void*);

void CNameItem::dtor()
{
    *(void**)this = (void*)0x7c7e34;
    if (field_78) {
        sub_6301e4(field_78);
        field_78 = 0;
    }
    if (field_48) {
        sub_6301e4(field_48);
        field_48 = 0;
    }
    sub_77ddbc(&field_74);
    sub_77ddbc(&field_60);
    sub_77ddbc(&field_5c);
    sub_77ddbc(&field_40);
    sub_63069a(this);
}
