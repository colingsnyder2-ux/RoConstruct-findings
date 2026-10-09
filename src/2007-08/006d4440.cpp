// from server: 89% by colin
// roc 2007-08 006d4440  unit: CXTPReportRow_Batch  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4440

extern "C" int __stdcall SetRectEmpty(int *);

struct CXTPReportRow_Batch {
    int f();
};

int CXTPReportRow_Batch::f()
{
    char *self = (char *)this;
    int *p;
    int (*fn)(int *);

    (*(void (__thiscall **)(char *))(*(int *)self + 0))(self);
    fn = *(int (**)(int *))0x77ee14;
    *(int *)self = 0x7d83d4;
    *(int *)(self + 0x20) = 0;
    *(int *)(self + 0x24) = 0;
    *(int *)(self + 0x4c) = 0;
    *(int *)(self + 0x50) = 0;
    *(int *)(self + 0x54) = 0;
    *(int *)(self + 0x58) = 0;
    *(int *)(self + 0x5c) = 0;
    *(int *)(self + 0x60) = 0;
    *(int *)(self + 0x64) = 1;
    fn((int *)(self + 0x2c));
    fn((int *)(self + 0x3c));
    *(int *)(self + 0x68) = 0;
    *(int *)(self + 0x28) = -1;
    *(int *)(self + 0x6c) = -1;
    return (int)self;
}
