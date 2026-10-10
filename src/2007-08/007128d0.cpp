// from server: 36% by colin
struct CXTShadowWnd {
    char pad[0x7c];
    void* field_7c;
    void sub_7128D0();
    void sub_7126D0(void*, void*);
};

extern "C" void __stdcall sub_67FFA0(void*);
extern "C" void __stdcall sub_7383AC(int);
extern "C" void* __stdcall sub_62FEF6(unsigned int);
extern "C" void __stdcall sub_6692B0(void*, int);
extern "C" void __stdcall sub_6D7100(void*, void*, void*);
extern "C" void __stdcall sub_6D70F0(void*);
extern "C" void __stdcall sub_6D7350(void*);
extern "C" void __stdcall sub_7383A6(void*);
extern "C" void __stdcall OffsetRect(void*, int, int);

void CXTShadowWnd::sub_7128D0()
{
    if (field_7c) {
        (*(void (__stdcall**)(int))(*((int*)field_7c) + 4))(1);
        field_7c = 0;
    }

    char buf1[0x10];
    sub_67FFA0(this);

    char buf2[0x10];
    sub_7383AC(0);

    void* obj = sub_62FEF6(0x34);
    if (obj) {
        char tmp[0x20];
        sub_6692B0(tmp, -1);
        sub_6D7100(obj, buf2, tmp);
    } else {
        obj = 0;
    }
    field_7c = obj;
    sub_6D70F0(obj);
    sub_6D7350(field_7c);

    int x = *(int*)(buf1 + 4);
    int y = *(int*)(buf1 + 8);
    OffsetRect(buf1, -x, -y);

    sub_7126D0(field_7c, buf1);
    sub_7383A6(buf2);
}
