// from server: 86% by colin
struct CXTPControl
{
    void method(int a);
};

extern void* __stdcall sub_63A000(void* out, int a, void* self, int one);
extern void __stdcall sub_63D450(void* p);

void CXTPControl::method(int a)
{
    void* tmp[2];
    void* r = sub_63A000(tmp, a, this, 1);
    sub_63D450(r);
}
