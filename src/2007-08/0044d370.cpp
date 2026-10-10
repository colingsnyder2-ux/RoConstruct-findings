// from server: 52% by colin
struct CPublishAsPlaceDialog {
    char pad[0x74];
    void* vtbl74;
    void* construct(void* a, void* b);
};

extern "C" void* __stdcall sub_40A730(void* out);
extern "C" void* __stdcall sub_40AA00(void* out, const char* s, void* a);
extern "C" void __stdcall sub_45BC90(void* self, void* a, void* b);
extern "C" void* __stdcall sub_77DD98(void* self, void* a);
extern "C" void __stdcall sub_77DDBC(void* self);

void* CPublishAsPlaceDialog::construct(void* a, void* b)
{
    void* v1;
    void* v2;
    void* v3;

    sub_40A730(&v1);
    sub_40AA00(&v2, "/UI/Save.aspx?type=Model", &v1);
    v3 = sub_77DD98(v2, b);
    sub_45BC90(this, a, v3);
    sub_77DDBC(&v1);
    sub_77DDBC(&v2);
    *(void**)this = (void*)0x791394;
    *(void**)((char*)this + 0x74) = (void*)0x791368;
    return this;
}
