// from server: 44% by colin
struct CXTPPropertyGridItem {
    void* vtable;
    char pad[0x1c];
    void* field_20;
    char pad2[0x7c];
    void* field_a0;
    void* field_a4;
    void* field_a8;
    void* field_ac;
    char pad3[0x28];
    void* field_d8;
    void* field_dc;
    void* field_e0;

    CXTPPropertyGridItem();
};

extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __fastcall sub_699a00(CXTPPropertyGridItem*);
extern "C" void __fastcall sub_671e80(void*);
extern "C" void __fastcall sub_63069a(CXTPPropertyGridItem*);

CXTPPropertyGridItem::CXTPPropertyGridItem()
{
    this->vtable = (void*)0x7d1764;
    *(void**)((char*)this + 0x20) = (void*)0x7d184c;
    sub_699a00(this);
    sub_77ddbc((char*)this + 0xe0);
    sub_77ddbc((char*)this + 0xdc);
    sub_77ddbc((char*)this + 0xd8);
    sub_77ddbc((char*)this + 0xac);
    sub_77ddbc((char*)this + 0xa8);
    sub_77ddbc((char*)this + 0xa4);
    sub_77ddbc((char*)this + 0xa0);
    sub_671e80((char*)this + 0x20);
    sub_63069a(this);
}
