// from server: 51% by colin
struct CXTPControl
{
    void sub_0063A700(void*);
    void func_0063C0F0(void*);
};

extern "C" void __stdcall sub_77DDAC(void*);
extern "C" int __stdcall sub_77D59C(void*, void*);
extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);

void CXTPControl::func_0063C0F0(void* arg)
{
    char buf[8];
    sub_77DDAC(buf);
    int result = sub_77D59C(buf, arg);
    if (result != 0)
    {
        void* p = sub_77DD98(buf);
        sub_0063A700(p);
    }
    sub_77DDBC(buf);
}
