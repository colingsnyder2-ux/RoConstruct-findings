// from server: 41% by colin
struct CXTPPropertyGridItemBool {
    char pad0[0x7c];
    int field_7c;
    char pad80[0x8c - 0x80];
    int field_8c;
    char pad90[0xa0 - 0x90];
    char field_a0[4];
    char field_a4[4];
    char padA8[0xbc - 0xa8];
    void* field_bc;
    char padC0[0x108 - 0xc0];
    char field_108[4];
    char field_10c[4];
    int field_110;
    void SetValue(int);
};

extern "C" void __stdcall sub_77ddac(void*);
extern "C" int __stdcall sub_77e160(void*, int, int);
extern "C" void* __stdcall sub_77dd98(void*, int, int);
extern "C" void __stdcall sub_77d434(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void* __stdcall sub_6b3010();
extern "C" void __stdcall sub_7383b8(void*, void*);

void CXTPPropertyGridItemBool::SetValue(int val)
{
    char buf[4];
    void* p;
    int r;
    void* obj;

    field_8c = 5;
    sub_77ddac(buf);
    field_110 = 0;
    obj = sub_6b3010();
    r = ((int (__stdcall*)(void*, void*, int))((*(void***)obj)[1]))(obj, buf, 0x251f);
    if (r != 0) {
        r = sub_77e160(buf, 10, 0);
        if (r != -1) {
            p = sub_77dd98(buf, 0, 10);
            sub_7383b8(field_108, p);
            p = sub_77dd98(buf, 1, 10);
            sub_7383b8(field_10c, p);
        }
    }
    ((void (__stdcall*)(void*, int))((*(void***)this)[0x39]))(this, val);
    {
        void* v = field_bc;
        void** vt = *(void***)v;
        p = sub_77dd98(field_108, 0, -1);
        ((void (__stdcall*)(void*, void*))vt[0x16])(v, p);
    }
    {
        void* v = field_bc;
        void** vt = *(void***)v;
        p = sub_77dd98(field_10c, 0, -1);
        ((void (__stdcall*)(void*, void*))vt[0x16])(v, p);
    }
    field_7c = 1;
    sub_77d434(field_a4, field_a0);
    field_110 = 0;
    sub_77ddbc(buf);
}
