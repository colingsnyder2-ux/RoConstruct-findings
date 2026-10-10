// from server: 76% by colin
struct CXTPCustomizeSheet_CCustomizeEdit {
    void f();
};

extern "C" void __stdcall sub_63002e(int, int, int, int, int, int, unsigned int);

void CXTPCustomizeSheet_CCustomizeEdit::f() {
    int* p = *(int**)((char*)this + 0x168);
    if (p != 0 && *(int*)((char*)p + 0x20) != 0) {
        unsigned int flags;
        int* q = *(int**)((char*)this + 0xfc);
        if (q != 0) {
            int* vt = *(int**)this;
            int (*fn)(void*, int) = *(int (**)(void*, int))((char*)vt + 0x80);
            if (fn(this, 0) != 0) {
                int* r = *(int**)((char*)this + 0xfc);
                if (r != 0 && *(int*)((char*)r + 0x20) != 0) {
                    int* vt2 = *(int**)r;
                    int (*fn2)(void*) = *(int (**)(void*))((char*)vt2 + 0x160);
                    if (fn2(r) != 0) {
                        flags = 0x40;
                    } else {
                        flags = 0x80;
                    }
                } else {
                    flags = 0x80;
                }
            } else {
                flags = 0x80;
            }
        } else {
            flags = 0x80;
        }
        int* target = *(int**)((char*)this + 0x168);
        sub_63002e((int)target, 0, 0, 0, 0, 0, flags | 0x17);
    }
}
