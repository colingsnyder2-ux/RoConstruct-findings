// from server: 67% by atomic.potato
struct CCommonDialog
{
    char padding[132];
    void* field84;
    void* f(void*);
};

extern "C" void* __stdcall Imported(void*, void*, int);

void* CCommonDialog::f(void* value)
{
    Imported(value, field84, 0);
    return value;
}
