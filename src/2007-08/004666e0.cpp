// from server: 42% by colin
struct CWebToolbox {
    void sub_62ff56(int, int, int, int, int, void*);
    void func_004666e0(int);
};

extern "C" {
    void* __stdcall sub_77ddac();
    void* __stdcall sub_77dd98(void*);
    void* __stdcall sub_77dd94(void*, const char*, void*);
    void* __stdcall sub_77ddbc(void*);
    void* __stdcall sub_40a730(void*);
}

void CWebToolbox::func_004666e0(int arg)
{
    void* v1;
    void* v2;
    void* v3;
    void* v4;

    sub_77ddac();
    v1 = sub_40a730(&v2);
    v3 = sub_77dd98(v1);
    sub_77dd94(&v4, "%s/IDE/ClientToolbox.aspx?Category=%d", v3);
    sub_77ddbc(&v2);
    v4 = sub_77dd98(&v2);
    sub_62ff56(0, 0, 0, 0, 0, v4);
    sub_77ddbc(&v2);
}
