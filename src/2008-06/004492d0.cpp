// from server: 39% by colin




extern "C" {
    int __stdcall compare_string_char(const void* str, const char* ch);
    void* __stdcall string_ctor(void* self, const char* s);
    void __stdcall string_dtor(void* self);
}

struct VItem {
    char pad[0x158];
    void* field_158;
    char pad2[0x14];
    void* field_14;

    void method_448f40(float f);
    void method_448fd0(float f);
    void method_449060(float f);
    void method_4490c0(float f);

    void func(char flag);
};

void VItem::func(char flag)
{
    if (!flag) {
        if (!compare_string_char(&field_158, *(const char**)0x9317fc))
            return;
    }

    float f = *(float*)0x8163a4;

    method_4490c0(f);
    method_449060(f);
    method_4490c0(f);
    method_448fd0(f);
    method_448f40(f);
    method_448fd0(f);

    char buf[0x20];
    string_ctor(buf, *(const char**)0x9317fc);

    void* p = this ? (void*)((char*)this + 0x14) : 0;
    void* mgr = *(void**)0x96d52c;
    void** vtbl = *(void***)mgr;
    typedef void (__thiscall *Fn)(void*, void*, void*);
    Fn fn = (Fn)vtbl[3];
    fn(mgr, p, buf);

    string_dtor(buf);
}
