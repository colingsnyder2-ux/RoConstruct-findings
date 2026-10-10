// from server: 51% by colin
struct FilteredSelection {
    void* vtable;
    char pad[8];
    void* field_0c;
    void* field_10;
    void* field_14;
    void* field_18;
    void* field_1c;
    void* field_20;
    void construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h);
};

extern "C" void __stdcall sub_5e49e0(void*, void*);
extern "C" void __stdcall sub_564c50(void*, void*);
extern "C" void __stdcall sub_77e69c(void*, void*);
extern "C" void __stdcall sub_77e6ac(void*);

void FilteredSelection::construct(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h)
{
    void* p = a;
    void* q = 0;
    if (p == 0) {
        q = (char*)p + 0x14c;
    }
    char buf[0x1c];
    sub_77e69c(buf, &b);
    sub_564c50(this, q);
    *(void**)this = (void*)0x7a91e4;
    sub_5e49e0(&this->field_0c, *(void**)((char*)p + 0x188));
    this->field_14 = p;
    this->field_18 = 0;
    this->field_1c = 0;
    this->field_20 = p;
    sub_77e6ac(buf);
}
