// from server: 86% by atomic.potato
struct VerbWidget {
    char pad_0[0xa4];
    void* f_a4;
    void method(int arg);
};

void VerbWidget::method(int arg) {
    if (f_a4 != 0) {
        void** vtbl = *(void***)f_a4;
        typedef bool (__thiscall *Fn8)(void*);
        Fn8 fn8 = (Fn8)vtbl[2];
        if (fn8(f_a4)) {
            void** vtbl2 = *(void***)f_a4;
            typedef void (__thiscall *Fn10)(void*, int);
            Fn10 fn10 = (Fn10)vtbl2[4];
            fn10(f_a4, *(int*)(arg + 0x14));
        }
    }
}
