// from server: 96% by colin
// roc 2007-08 0070a090  size: 61 bytes

extern "C" void* __stdcall GetFocus();

struct CXTColorHex {
    void sub_709F50(int, int);
    void sub_630004();
    void sub_63023E();
    void* sub_6301C0();
    void func(int, int, int);
};

void CXTColorHex::func(int a, int b, int c)
{
    void* p = GetFocus();
    if (sub_6301C0() != (void*)this)
        sub_630004();
    sub_709F50(b, c);
    *(int*)((char*)this + 0x68) = 1;
    sub_63023E();
}
