// from server: 48% by colin
// roc 2007-08 005591b0  unit: RBX::DataModel  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005591b0

extern "C" {
    void* __stdcall GetCurrentThread(void);
    void* __stdcall GetCurrentProcess(void);
}

struct std_string {
    std_string(const std_string&);
    ~std_string();
};

struct DataModel {
    int func(int, int, int, int, int);
};

int DataModel::func(int a1, int a2, int a3, int a4, int a5)
{
    void* p = GetCurrentThread();
    (void)p;
    std_string* src = (std_string*)((char*)&a1 + 0x3c);
    std_string tmp(*src);
    std_string tmp2(tmp);
    (void)tmp2;
    (void)GetCurrentProcess();
    return 0;
}
