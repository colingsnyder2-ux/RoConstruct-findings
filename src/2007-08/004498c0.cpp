// from server: 43% by colin
struct CRobloxModule {
    int field_0x8c;
    int field_0x90;
    int OpenDocumentFile(int);
    int sub_448c10();
    int sub_4498c0();
};

extern "C" {
    int __stdcall sub_412dc0(void*, const char*);
    int __stdcall sub_630b9e(void*, void*);
    void* __stdcall sub_77e698(const char*);
}

extern void* g_8bbe94;
extern void* g_8410c0;

int CRobloxModule::sub_4498c0()
{
    if (this->field_0x90 != 0)
        return 0;

    void* p = g_8bbe94;
    g_8bbe94 = 0;
    if (p != 0) {
        int* vtbl = *(int**)p;
        int (*fn)(void*, int) = (int (*)(void*, int))vtbl[0];
        fn(p, 1);
    }

    int* vtbl = *(int**)this;
    int (*fn)(CRobloxModule*, int, int) = (int (*)(CRobloxModule*, int, int))vtbl[0x88 / 4];
    int saved = this->field_0x8c;
    int result = fn(this, 0, 1);

    this->sub_448c10();

    if (result == 0) {
        if (saved != this->field_0x8c) {
            void* s1 = sub_77e698("OpenDocumentFile returned NULL - a");
            char buf1[0x28];
            sub_412dc0(buf1, (const char*)s1);
            sub_630b9e(buf1, g_8410c0);
        }
        void* s2 = sub_77e698("OpenDocumentFile returned NULL - b");
        char buf2[0x28];
        sub_412dc0(buf2, (const char*)s2);
        sub_630b9e(buf2, g_8410c0);
    }

    return result;
}
