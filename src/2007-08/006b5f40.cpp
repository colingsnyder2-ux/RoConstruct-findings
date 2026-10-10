// from server: 92% by colin
// roc 2007-08 006b5f40  unit: CXTPControlComboBoxGalleryPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b5f40

struct CXTPControlComboBoxGalleryPopupBar
{
    int sub_6b4080();
};

extern "C" CXTPControlComboBoxGalleryPopupBar* __stdcall sub_6b3960(int, int, int);

int __stdcall sub_6b5f40(int a, int b)
{
    CXTPControlComboBoxGalleryPopupBar* r = sub_6b3960(a, b, 1);
    return r->sub_6b4080();
}
