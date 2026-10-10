// from server: 37% by colin
struct CXTCaptionButton {
    int f(int, int, int, int, int, int, int, int, int, int, int);
};

extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __cdecl sub_6485e0(void*, void*);
extern "C" int __cdecl sub_648600(void*);
extern "C" void __cdecl sub_6496a0(void*);
extern "C" void* __cdecl sub_649b30(void*, int, int, int, int);
extern "C" void __cdecl sub_64b2c0(void*, void*);
extern "C" void __cdecl sub_64b730(void*, void*);
extern "C" void __cdecl sub_64c9a0(void*, void*);
extern "C" int __cdecl sub_7153d0(void*, int, int, int, int);

int CXTCaptionButton::f(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int v12;
    int v13;
    int v14;
    int v15;
    void* v16;
    int v17;
    char buf1[16];
    char buf2[16];

    if (a1 != 0 || a2 != 0) {
        v12 = a1;
        v13 = a2;
    } else {
        sub_64b2c0(buf1, &a3);
        v12 = *(int*)buf1;
        v13 = *(int*)(buf1 + 4);
    }

    v14 = v12;
    v15 = v13;

    v16 = sub_62fef6(0xbc);
    if (v16 != 0) {
        v17 = (int)sub_649b30(v16, 0, v14, v15, 0);
    } else {
        v17 = 0;
    }

    sub_6485e0(buf2, &a4);
    sub_64c9a0((void*)v17, buf2);
    if (sub_648600(buf2) == 0) {
        sub_6485e0(buf2, &a5);
        sub_64b730((void*)v17, buf2);
    }

    int result = sub_7153d0(this, v14, v15, v17, a6);
    sub_6496a0(buf2);
    sub_6496a0(buf1);
    return result;
}
