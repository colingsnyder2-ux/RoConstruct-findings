// from server: 36% by colin
struct CXTPReportRecordItemVariant {
    char pad0[0x40];
    char field40[0x20];
    char field60[0x1c];
    char field7c[0x4];
    int method();
};

extern "C" int __stdcall sub_802fd8(void*);
extern "C" int __stdcall sub_803ed4(void*, void*);
extern "C" int __stdcall sub_802ff0(void*, void*);
extern "C" void* __stdcall sub_803ee0(void*);

extern "C" void sub_7bc2ce(void*, void*);
extern "C" void sub_7bc112(void*);
extern "C" void sub_7bc100(void);
extern "C" void* sub_6c8000(void*, int);
extern "C" void sub_6c8e40(void*, int, int);
extern "C" void sub_6d4440(void*, void*, void*);
extern "C" void sub_6d89e0(void*, void*);

int CXTPReportRecordItemVariant::method()
{
    char buf[0x40];
    void* p;
    int n;
    int flag;

    if (!sub_802fd8(this->field60)) {
        sub_803ed4(this->field60, 0);
        return 0;
    }

    sub_7bc2ce(buf, this->field7c);
    p = sub_6c8000(this, 0);
    n = *(int*)((char*)p + 0x24);
    sub_7bc112(buf);

    if (*(unsigned short*)buf == 7) {
        if (n == 0) {
            if (sub_802ff0(this->field40, (void*)0x8103ac)) {
                *(double*)(buf + 0x10) = 0.0;
                *(int*)(buf + 0x18) = n;
                sub_6d89e0(buf, buf);
                sub_6d4440(0, buf, sub_803ee0(this->field40));
                sub_7bc100();
                sub_7bc2ce(buf, 0);
                return 1;
            }
        }
    }

    if (*(unsigned short*)buf == 1) {
        *(unsigned short*)buf = 3;
        *(int*)(buf + 8) = 0;
        flag = 1;
    } else {
        int v = n ? 8 : 3;
        sub_6c8e40(buf, v, 1);
        flag = 1;
    }

    return flag;
}
