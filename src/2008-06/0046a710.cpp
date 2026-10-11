// from server: 55% by colin
struct CWebToolbox
{
    void sub_006a0ad0();
    void sub_006a097a(void*);
    void func_0046a710();
};

extern "C" void* __stdcall sub_004060d0(void*);
extern "C" void __stdcall sub_0040e160(void*, const char*, void*);
extern "C" void __stdcall sub_00803f14(void*);
extern "C" void* __stdcall sub_00803ee0(void*, int, int, int, int, int);

void CWebToolbox::func_0046a710()
{
    char buf[8];
    sub_006a0ad0();
    void* p = sub_004060d0(buf);
    sub_0040e160(buf, "/IDE/ClientToolbox.aspx", p);
    sub_00803f14(buf);
    void* q = sub_00803ee0(buf, 0, 0, 0, 0, 0);
    sub_006a097a(q);
    sub_00803f14(buf);
}
