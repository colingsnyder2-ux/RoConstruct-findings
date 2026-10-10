// from server: 37% by colin
// roc 2007-08 00651ff0  unit: CXTPPrintingDialog  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00651ff0

struct CXTPPrintingDialog {
    char pad[0x2cc];
    CXTPPrintingDialog();
};

extern "C" void __stdcall sub_630508();
extern "C" void __stdcall sub_7384f0();
extern "C" void __stdcall sub_65b8a0();
extern "C" void* __stdcall sub_62fef6(int);
extern "C" void __stdcall sub_651f40();

CXTPPrintingDialog::CXTPPrintingDialog()
{
    sub_630508();
    *(int*)((char*)this + 0x00) = 0x7c7a8c;
    *(int*)((char*)this + 0x5c) = 0;
    *(int*)((char*)this + 0x58) = 0x788300;
    sub_7384f0();
    sub_65b8a0();
    void* p = sub_62fef6(0x40);
    if (p != 0) {
        sub_651f40();
    } else {
        p = 0;
    }
    *(int*)((char*)this + 0x2b4) = (int)p;
    *(int*)((char*)this + 0x2b0) = 0;
    *(int*)((char*)this + 0x2c4) = 0;
    *(int*)((char*)this + 0x2c8) = 1;
    *(int*)((char*)this + 0x2bc) = 1;
    *(int*)((char*)this + 0x2c0) = 1;
    *(int*)((char*)this + 0x2b8) = 0;
    *(int*)((char*)this + 0x2ac) = 0;
}
