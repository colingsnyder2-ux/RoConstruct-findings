// from server: 89% by atomic.potato
extern "C" void* __stdcall GetDlgItem(void*, int);
extern "C" int __stdcall SetWindowTextA(void*, const char*);

struct CProgressDialog
{
    void f(const char*);
};

void CProgressDialog::f(const char* text)
{
    void* window = GetDlgItem(*(void**)((char*)this + 4), 0x414);
    SetWindowTextA(window, text);
}
