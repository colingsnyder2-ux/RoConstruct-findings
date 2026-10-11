// from server: 41% by colin
struct CXTPControlComboBoxGalleryPopupBar
{
    void f(int, int);
};

extern "C" void* __stdcall sub_72E380(int);
extern "C" void* __stdcall sub_72F200(void*);
extern "C" void __stdcall sub_803144(void*);
extern "C" void __stdcall sub_803F14(void*);

void CXTPControlComboBoxGalleryPopupBar::f(int a, int b)
{
    void* p = sub_72E380(b);
    void* q = sub_72F200(p);
    sub_803144(q);
    sub_803F14(&p);
}
