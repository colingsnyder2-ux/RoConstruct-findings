// from server: 32% by colin
struct CPublishAsPlaceDialog {
    char pad[0x74];
    void* vtable_74;
    void* vtable_0;
    void* construct(char* a, char* b);
};

extern "C" void* __stdcall sub_4060d0(void*);
extern "C" void* __stdcall sub_40e160(void*, const char*, void*);
extern "C" void __stdcall sub_45fe80(void*, void*, void*);
extern "C" void* __stdcall sub_803ee0(void*);
extern "C" void __stdcall sub_803f14(void*);

void* CPublishAsPlaceDialog::construct(char* a, char* b)
{
    void* p1;
    void* p2;
    void* p3;
    void* p4;
    void* p5;

    sub_4060d0(&p1);
    p2 = sub_40e160(&p3, "/UI/Save.aspx?type=Model", &p1);
    p4 = sub_803ee0(p2);
    sub_45fe80(this, p4, p3);
    sub_803f14(&p1);
    sub_803f14(&p3);
    this->vtable_0 = (void*)0x81777c;
    this->vtable_74 = (void*)0x817750;

    return this;
}
