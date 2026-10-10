// from server: 58% by colin
struct CXTSplitterWnd {
    char pad[0x20];
    void* hwnd;
    char pad2[0x98 - 0x24];
    int field_98;
    int field_9c;
    char pad3[0xa4 - 0xa0];
    int field_a4;
    char pad4[0xb8 - 0xa8];
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    int field_d0;
    int field_d4;
    int field_d8;
    char pad5[0xfc - 0xdc];
    int field_fc;
    char pad6[0x114 - 0x100];
    int field_114;

    void OnSomething(int param);
};

extern "C" {
    int __stdcall sub_738412();
    void __stdcall sub_6303b8(int, int, int);
    void __stdcall sub_738af6(int);
    void __stdcall sub_6301c0(void*);
    void* __stdcall sub_77ec48(void*);
    void __stdcall sub_77edd8(void*, int, int);
}

void CXTSplitterWnd::OnSomething(int param)
{
    if (this->field_fc == 0) {
        this->field_114 = 0;
        int flags = sub_738412();
        if (flags & 0x2000000) {
            sub_6303b8(0x6000000, 0, 0);
            this->field_114 = 1;
        }
        sub_738af6(param);
        return;
    }

    if (param != 0) {
        void** vtable = *(void***)this;
        void (__stdcall *fn1)(void*) = (void (__stdcall *)(void*))vtable[0x18c / 4];
        fn1((char*)this + 0xa8);

        int ebx = param;
        if ((unsigned)(ebx - 0x12d) <= 0xe0) {
            int eax = ebx - 0x12d;
            int edx = eax % 0xf;
            eax = eax / 0xf;
            void (__stdcall *fn2)(int, void*) = (void (__stdcall *)(int, void*))vtable[0x190 / 4];
            fn2(eax + 0x65, (char*)this + 0xb8);
            int ebp = this->field_a4;
            void (__stdcall *fn3)(int, void*) = (void (__stdcall *)(int, void*))vtable[0x190 / 4];
            fn3(edx + 0xc9, (char*)this + 0xc8);
            this->field_9c = 1;
            this->field_a4 = ebp;
        } else if (ebx == 3) {
            void (__stdcall *fn4)(int, void*) = (void (__stdcall *)(int, void*))vtable[0x190 / 4];
            fn4(1, (char*)this + 0xb8);
            int saved = this->field_a4;
            void (__stdcall *fn5)(int, void*) = (void (__stdcall *)(int, void*))vtable[0x190 / 4];
            fn5(2, (char*)this + 0xc8);
            this->field_9c = 1;
            this->field_a4 = saved;

            int cx = (this->field_c4 - this->field_bc) / 2;
            sub_77edd8((char*)this + 0xb8, 0, cx);
            int cy = (this->field_c0 - this->field_b8) / 2;
            sub_77edd8((char*)this + 0xc8, 0, cy);
        } else {
            void (__stdcall *fn6)(int, void*) = (void (__stdcall *)(int, void*))vtable[0x190 / 4];
            fn6(ebx, (char*)this + 0xb8);
        }

        sub_77ec48(this->hwnd);
        sub_6301c0(this->hwnd);
        void (__stdcall *fn7)(int) = (void (__stdcall *)(int))vtable[0x1a0 / 4];
        this->field_98 = 1;
        this->field_d8 = ebx;
        fn7(ebx);
    }
}
