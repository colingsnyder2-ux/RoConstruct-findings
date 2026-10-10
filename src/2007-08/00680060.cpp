// from server: 15% by colin
struct CXTPPrintingDialog
{
    void* vftable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;

    CXTPPrintingDialog(int, int, int*);
};

extern "C" void __stdcall sub_7383E2();
extern "C" void __stdcall sub_7383D0();
extern "C" void* __stdcall CreateCompatibleDC(void*);
extern "C" void* __stdcall CreateCompatibleBitmap(void*, int, int);
extern "C" void* __stdcall SelectObject(void*, void*);
extern "C" void __stdcall sub_630238();

CXTPPrintingDialog::CXTPPrintingDialog(int a2, int a3, int* a4)
{
    sub_7383E2();
    this->vftable = (void*)0x7cec54;
    this->field_10 = a2;
    this->field_14 = 0;
    this->field_18 = 0;
    this->field_14 = 0x788300;
    this->field_1c = a4[0];
    this->field_20 = a4[1];
    this->field_24 = a4[2];
    this->field_28 = a4[3];
    void* hdc = CreateCompatibleDC((void*)this->field_10);
    sub_7383D0();
    if (this->field_4 != 0)
    {
        void* hbmp = CreateCompatibleBitmap((void*)this->field_10, this->field_24, this->field_28);
        sub_630238();
        int tmp = this->field_14;
        if (tmp != 0)
            tmp = *(int*)(tmp + 4);
        this->field_2c = (int)SelectObject((void*)this->field_4, (void*)tmp);
    }
}
