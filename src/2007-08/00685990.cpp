// from server: 84% by colin
struct CNameItem {
    CNameItem* construct(const char* name);
};

extern "C" void* __stdcall sub_77DCC8(void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __fastcall sub_7389B2(void* self, void* unused, void* a);
extern "C" void __fastcall sub_630694(void* self, void* unused, void* a, void* b);

CNameItem* CNameItem::construct(const char* name)
{
    void* p1 = sub_77DCC8((void*)name);
    sub_7389B2(this, 0, p1);
    void* p2 = sub_77DCC8((void*)name);
    void* p3 = sub_77DD98(p2);
    sub_630694(this, 0, p2, p3);
    return this;
}
