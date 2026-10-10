// from server: 60% by atomic.potato
extern "C" void __stdcall sub_007f3c02(void *);
extern "C" void __stdcall sub_007f3d22(void *);

struct CWebToolbox {
    void f(void *);
    void *field_f8;
};

void CWebToolbox::f(void *)
{
    if (field_f8)
        sub_007f3c02(field_f8);
    sub_007f3d22(this);
}
