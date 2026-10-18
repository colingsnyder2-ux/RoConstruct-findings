// from server: 27% by atomic.potato
struct CStandardOutputView {
    char pad0[0x118];
    void* field_118;
    void method_436b60(void*);
    void func_437150(void*, void*, void*, void*);
};

extern "C" {
    void __stdcall AtlThrowImpl(long);
    void* __stdcall sub_401180(const char*);
    void* __stdcall sub_436150(void*, void*, void*, void*, void*);
    void __stdcall sub_8034a0(void*);
    void __stdcall sub_8034a4(void*, void*);
    void __stdcall sub_8034a8(void*, const char*);
    void __stdcall sub_8034ac(void*, void*);
    void __stdcall sub_8034b0(void*, int);
    void __stdcall sub_8034b4(void*, void*, void*, void*);
    void __stdcall sub_8034b8(void*);
    void __stdcall sub_8034bc(void*);
    void __stdcall sub_802838(void*, int, void*);
    void* __stdcall sub_802900(void*);
    void __stdcall sub_802944(void*);
}

void CStandardOutputView::func_437150(void* a, void* b, void* c, void* d)
{
    char buf1[0x10];
    char buf2[0x10];
    char buf3[0x10];
    void* v1;
    void* v2;
    void* v3;
    void* v4;
    int state = 0;

    sub_8034bc(a);
    sub_8034b8(buf1);
    sub_8034b8(buf2);

    v1 = sub_436150(*(void**)((char*)buf1 - 0xc), buf1, 0, 0, 0);
    v2 = sub_436150(*(void**)((char*)buf2 - 0xc), buf2, v1, v1, 0);
    sub_8034b0(buf3, -1);

    if (a != 0 && (b != 0 || c != 0)) {
        sub_802838(buf1, 0x20, &c);
        sub_8034ac(buf3, buf1);
        sub_8034a8(buf3, "<FONT color=\"blue\">");
    }

    switch ((int)a) {
    case 0:
        sub_8034a8(buf3, "<STRONG><FONT color=\"red\">");
        sub_8034a4(buf3, buf1);
        sub_8034a8(buf3, "</FONT>");
        break;
    case 1:
        sub_8034a8(buf3, "<STRONG><FONT color=\"orange\">");
        sub_8034a4(buf3, buf1);
        sub_8034a8(buf3, "</FONT>");
        break;
    case 2:
        sub_8034a8(buf3, "<STRONG><FONT color=\"red\">");
        sub_8034a4(buf3, buf1);
        sub_8034a8(buf3, "</FONT>");
        break;
    case 3:
        sub_8034a4(buf3, buf1);
        break;
    }

    v3 = 0;
    if (field_118 != 0) {
        void* p = sub_401180("<FONT color=\"blue\">");
        void* q = *(void**)p;
        void* r = *(void**)field_118;
        (*(void (__stdcall**)(void*, void*, void*, void**))(*(char**)r + 0x120))(field_118, q, &v3, &v3);
        sub_802944(v3);
        if (v3 != 0) {
            v4 = sub_802900(v3);
            if (v4 == 0) {
                AtlThrowImpl(0x8007000E);
            }
        } else {
            v4 = 0;
        }
        (*(void (__stdcall**)(void*, void*))(*(char**)v4 + 0xe4))(v4, 0);
        sub_802944(0);
        method_436b60(v3);
    }

    sub_8034a0(buf3);
    sub_8034a0(buf2);
    sub_8034a0(buf1);
}
