// from server: 49% by colin
extern "C" {
    void* __stdcall CreateCompatibleDC(void*);
    int __stdcall DeleteDC(void*);
    int __stdcall DeleteObject(void*);
    void* __stdcall SelectObject(void*, void*);
    int __stdcall SetStretchBltMode(void*, int);
    int __stdcall BitBlt(void*, int, int, int, int, void*, int, int, unsigned long);
    int __stdcall StretchBlt(void*, int, int, int, int, void*, int, int, int, int, unsigned long);
}

void* __stdcall sub_67f800(int);
void* __stdcall sub_67f830(void*, int);
void* __stdcall sub_647fc0(int, int, int, int);
int __stdcall sub_647da0(void*, void*, void*, void*, void*, void*, void*, void*);
void __stdcall sub_682240();
void* __stdcall sub_77d148(int);
void* __stdcall sub_77d128(void*, void*);
void __stdcall sub_77d108(void*, int);
int __stdcall sub_77d138(void*, int, int, int, int, int, int, int, int, unsigned long);
int __stdcall sub_77d13c(void*, int, int, int, int, int, int, int, int, unsigned long);
void __stdcall sub_77d118(void*);
void __stdcall sub_77d0c8(void*);

struct CXTPCommandBar {
    int sub_648030(int, int, int, int, int, int, int, int, int, int);
};

int CXTPCommandBar::sub_648030(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    void* dc1;
    void* dc2;
    void* dc3;
    void* dc4;
    void* dc5;
    void* dc6;
    void* dc7;
    void* dc8;
    void* dc9;
    void* dc10;
    int result;

    dc1 = 0;
    dc2 = 0;
    dc3 = 0;
    dc4 = 0;
    dc5 = 0;
    dc6 = 0;
    dc7 = 0;
    dc8 = 0;
    dc9 = 0;
    dc10 = 0;
    result = 0;

    sub_682240();
    dc1 = (void*)sub_67f800(a1);
    sub_682240();
    dc2 = (void*)sub_67f800(a2);
    dc3 = (void*)sub_647fc0(a2, a3, a4, 0);
    if (dc3 == 0) {
        goto cleanup;
    }
    dc4 = (void*)sub_647fc0(a2, a3, a4, 0);
    if (dc4 == 0) {
        goto cleanup;
    }
    dc5 = (void*)sub_647fc0(a2, a3, a4, 0);
    if (dc5 == 0) {
        goto cleanup;
    }
    dc6 = (void*)sub_77d148(a1);
    if (dc6 == 0) {
        goto cleanup;
    }
    dc7 = (void*)sub_77d148(a1);
    if (dc7 == 0) {
        goto cleanup;
    }
    sub_682240();
    sub_67f830(dc7, 0);
    sub_682240();
    sub_67f830(dc6, 0);
    dc8 = (void*)sub_77d128(dc6, dc1);
    dc9 = (void*)sub_77d128(dc7, dc2);
    sub_77d108(dc6, 3);
    sub_77d108(dc7, 3);
    if (sub_77d138(dc6, 0, 0, a5, a6, a7, a8, a9, a10, 0xcc0020) == 0) {
        goto cleanup;
    }
    if (sub_77d13c(dc7, 0, 0, a5, a6, a7, a8, a9, a10, 0xcc0020) == 0) {
        goto cleanup;
    }
    sub_77d128(dc6, dc8);
    sub_77d128(dc7, dc9);
    result = sub_647da0(dc6, dc7, dc8, dc9, dc10, dc3, dc4, dc5);
    if (result == 0) {
        goto cleanup;
    }
    sub_77d128(dc6, dc8);
    sub_77d13c(dc7, 0, 0, a5, a6, a7, a8, a9, a10, 0xcc0020);
    sub_77d128(dc6, dc8);
    goto cleanup;
cleanup:
    if (dc8 != 0) {
        sub_77d128(dc6, dc8);
    }
    if (dc9 != 0) {
        sub_77d128(dc7, dc9);
    }
    sub_77d118(dc6);
    if (dc7 != 0) {
        sub_77d118(dc7);
    }
    sub_77d0c8(dc3);
    if (dc4 != 0) {
        sub_77d0c8(dc4);
    }
    if (dc5 != 0) {
        sub_77d0c8(dc5);
    }
    return result;
}
