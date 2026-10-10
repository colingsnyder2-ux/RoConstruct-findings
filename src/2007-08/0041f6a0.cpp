// from server: 78% by colin
struct CSettingsExplorer {
    void sub_41F6A0(unsigned short);
};

extern "C" void* __stdcall sub_630478(unsigned short, int, unsigned short);
extern "C" void* __stdcall sub_630472(void*, void*);
extern "C" void* __stdcall LoadMenuA(void*, void*);

void CSettingsExplorer::sub_41F6A0(unsigned short a)
{
    void* p = sub_630478(a, 4, a);
    void* q = LoadMenuA(0, p);
    sub_630472(this, q);
}
