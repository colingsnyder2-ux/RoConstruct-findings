// from server: 92% by colin
// roc 2007-08 006b5f20  unit: CXTPControlComboBoxGalleryPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b5f20

extern "C" int __stdcall sub_6b3960(int, int, int);
extern "C" int __fastcall sub_6b4080(int);

struct CXTPControlComboBoxGalleryPopupBar
{
    int f(int, int);
};

int CXTPControlComboBoxGalleryPopupBar::f(int a, int b)
{
    int r = sub_6b3960(a, b, 0);
    return sub_6b4080(r);
}
