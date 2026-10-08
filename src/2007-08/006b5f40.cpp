// from server: 84% by colin
// roc 2007-08 006b5f40  unit: CXTPControlComboBoxGalleryPopupBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b5f40

extern "C" int __stdcall sub_6b3960(int, int, int);
extern "C" int __stdcall sub_6b4080();

int __stdcall sub_6b5f40(int a, int b)
{
    int r = sub_6b3960(a, b, 1);
    return sub_6b4080();
}
