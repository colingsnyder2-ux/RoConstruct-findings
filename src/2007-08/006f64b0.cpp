// from server: 26% by colin
struct CXTPPropertyGridInplaceEdit
{
    char pad[0x70];
    void* field_70;
    void* field_74;
    void* field_78;
    void* field_7c;
    void* field_80;
    void* field_84;
    void* field_8c;
    void* field_90;
    void dtor();
};

extern "C" void __stdcall sub_0041f680(void*);
extern "C" void __stdcall sub_00738382(void*);
extern "C" void __stdcall sub_0077ddbc(void*);

void CXTPPropertyGridInplaceEdit::dtor()
{
    *(void**)this = (void*)0x7dc3a4;
    *(void**)((char*)this + 0x90) = (void*)0x7864e0;
    sub_0041f680((char*)this + 0x90);
    sub_0077ddbc((char*)this + 0x8c);
    sub_0077ddbc((char*)this + 0x84);
    sub_0077ddbc((char*)this + 0x80);
    sub_0077ddbc((char*)this + 0x7c);
    sub_0077ddbc((char*)this + 0x78);
    sub_0077ddbc((char*)this + 0x74);
    sub_0077ddbc((char*)this + 0x70);
    sub_00738382(this);
}
