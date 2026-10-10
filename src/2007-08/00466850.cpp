// from server: 54% by colin
struct CWebToolbox {
    void sub_6300b8();
    void sub_62ff56(void*);

    void func_00466850();
};

extern "C" void* __stdcall sub_40a730(void*);
extern "C" void __stdcall sub_40aa00(void*, const char*, void*);
extern "C" void* __stdcall sub_77dd98(void*, int, int, int, int, int);
extern "C" void __stdcall sub_77ddbc(void*);

void CWebToolbox::func_00466850()
{
    char buf[8];
    void* p;
    sub_6300b8();
    p = sub_40a730(buf);
    sub_40aa00(buf, "/IDE/ClientToolbox.aspx", p);
    sub_77ddbc(buf);
    void* v = sub_77dd98(buf, 0, 0, 0, 0, 0);
    sub_62ff56(v);
    sub_77ddbc(buf);
}
