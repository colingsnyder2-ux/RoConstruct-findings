// from server: 61% by atomic.potato
struct VCEditMaskEdit {
    void* vtbl;
    char pad[0x1c];
    void* field20;
    char pad2[0x38];
    void* field5c;
    char pad3[0x10];
    void* field70;
    int method_a(int);
    int method_b(int, int);
};

extern "C" int __stdcall sub_a995d2();
extern "C" int __stdcall sub_a57940(void*, int);

int VCEditMaskEdit::method_b(int a, int b) {
    if (field5c != 0 && field20 != 0) {
        if ((sub_a995d2() & 0x800) == 0) {
            if (*(unsigned char*)&field70 == 0) {
                goto cont;
            }
        }
    }
    return 0;
cont:
    {
        int (*fn1)(void*, int) = *(int (**)(void*, int))((char*)vtbl + 0x150);
        if (fn1(this, *(unsigned char*)a) == 0) {
            return 1;
        }
        int (*fn2)(void*) = *(int (**)(void*))0xb24658;
        int n = fn2(&field70);
        if (b >= n) {
            return 0;
        }
        if (sub_a57940(this, b) == 0) {
            return 0;
        }
        int (*fn3)(void*, int, int) = *(int (**)(void*, int, int))((char*)vtbl + 0x14c);
        fn3(this, a, b);
    }
    return 0;
}
