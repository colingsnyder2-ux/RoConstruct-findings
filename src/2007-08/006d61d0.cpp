// from server: 78% by colin
struct CXTPReportGroupRow_Batch {
    int field0;
    char pad[0x38];
    int field3c;
    int method1();
    int method2(int);
    int method3(int, int);
    int method4(int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);

int CXTPReportGroupRow_Batch::method4(int a, int b) {
    if (PtInRect(&field3c, a, b) == 0) {
        int (*fn1)(void*) = *(int (**)(void*))((*(int*)this) + 0x78);
        int (*fn2)(void*, int) = *(int (**)(void*, int))((*(int*)this) + 0x7c);
        int v = fn1(this);
        int flag = (v == 0) ? 1 : 0;
        fn2(this, flag);
    }
    return method3(a, b);
}
