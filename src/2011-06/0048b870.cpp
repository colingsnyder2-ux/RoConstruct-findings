// from server: 57% by atomic.potato
extern "C" int __stdcall ImportedCall(int, int);

struct CCommonDialog
{
    char padding[136];
    int field_88;
    int DoSomething(int);
};

int CCommonDialog::DoSomething(int value)
{
    int unused = 0;
    (void)unused;
    return ImportedCall(value, field_88);
}
