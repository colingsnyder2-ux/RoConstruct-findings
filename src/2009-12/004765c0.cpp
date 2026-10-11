// from server: 74% by atomic.potato
struct CWebToolbox
{
    char unused[0xf8];
    void* fieldF8;
    void f(int, int, int);
};

extern "C" void __declspec(nothrow) sub_007f3cc2(CWebToolbox*, int, int, int);
extern "C" void __declspec(nothrow) sub_007f3c02(void*);

void CWebToolbox::f(int a, int b, int c)
{
    sub_007f3cc2(this, a, b, c);
    if (fieldF8)
        sub_007f3c02(fieldF8);
}
