// from server: 48% by colin
// roc 2007-08 00652190  unit: CXTPPrintingDialog  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00652190

extern "C" int __stdcall GetSystemMetrics(int);

struct CXTPPrintingDialog {
    void sub_63023e();
    void sub_630034(int, int, int, int, int);
    virtual void* vf_18c();
    void func(int, int, int);
};

void CXTPPrintingDialog::sub_63023e() {}
void CXTPPrintingDialog::sub_630034(int, int, int, int, int) {}

void CXTPPrintingDialog::func(int a, int b, int c)
{
    sub_63023e();
    int* p = *(int**)((char*)this + 0x2b8);
    if (p != 0 && p[8] != 0) {
        int m = GetSystemMetrics(2);
        int d = a - m;
        sub_630034(0, d, m, b, 1);
    }
    if (*(int*)((char*)this + 0x2c8) != 0) {
        void* q = vf_18c();
        if (q != 0 && *(int*)((char*)q + 0x20) != 0) {
            void* r = vf_18c();
            ((CXTPPrintingDialog*)r)->sub_630034(0, 0, a, b, 1);
        }
    }
}
