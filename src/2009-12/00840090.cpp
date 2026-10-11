// from server: 28% by atomic.potato
struct CComboBox {
    char pad0[0x54];
    int field54;
    int sub_86b740(int);
    int sub_86bd00(int, int);
    CComboBox();
};

extern "C" void __stdcall sub_7f4148();

CComboBox::CComboBox()
{
    sub_7f4148();
    this->field54 = 0;
    *(int*)this = 0x9f963c;
    this->sub_86b740(1);
    this->sub_86bd00(0, 0x9f2920);
}
