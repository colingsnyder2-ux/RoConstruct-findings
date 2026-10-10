// from server: 70% by colin
// roc 2010-06 00893040  unit: CXTColorPageCustom  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00893040

extern "C" void __stdcall sub_7A7C28(int);
extern "C" void __stdcall sub_8920B0(int, double);
extern "C" int __stdcall sub_891670(double, double, double);
extern "C" void __stdcall sub_8138D0(int, int);
extern "C" void __stdcall sub_8916B0(int, int);

extern double dbl_A07680;

struct CXTColorPageCustom {
    char pad_0000[0x108];
    char field_0108[0x660];
    int field_0768;
    int field_076C;
    int field_0770;
    int field_0774;
    int field_0778;
    int field_077C;
    int field_0780;
    void OnChangeEdit();
};

void CXTColorPageCustom::OnChangeEdit()
{
    sub_7A7C28(1);
    sub_8920B0((int)(this->field_0108), (double)this->field_0778 / dbl_A07680);
    int v = sub_891670(
        (double)this->field_0774 / ((double)this->field_0778 / dbl_A07680),
        (double)this->field_0778 / dbl_A07680,
        (double)this->field_077C / dbl_A07680);
    int* p = (int*)this->field_0780;
    if (v != p[0x124 / 4])
    {
        sub_8138D0(v, 0);
    }
    sub_8916B0((int)this, v);
}
