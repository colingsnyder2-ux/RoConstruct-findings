// from server: 38% by colin
struct CBrowserView {
    char pad[0x2b8];
    void* field_2b8;
    void construct();
};

extern "C" void __stdcall sub_40C410();
extern "C" void* __stdcall sub_40A730();
extern "C" void* __stdcall sub_40AA00(void*, void*, void*);
extern "C" void __stdcall sub_77D434(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CBrowserView::construct()
{
    sub_40C410();
    *(void**)this = (void*)0x7861b4;
    void* p = sub_40A730();
    void* q = sub_40AA00(&p, (void*)0x7861a4, 0);
    sub_77D434(&field_2b8, q);
    sub_77DDBC(&p);
    sub_77DDBC(&q);
}
