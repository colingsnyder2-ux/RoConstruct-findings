// from server: 51% by colin
struct CXTPDockingPaneContext {
    char pad[0xb8];
    int rect0;          // 0xb8
    int rect1;          // 0xbc
    int rect2;          // 0xc0
    int rect3;          // 0xc4
    int field_c8;       // 0xc8
    int field_cc;       // 0xcc
    char pad2[0xdc - 0xd0];
    int field_dc;       // 0xdc
    char pad3[0x11c - 0xe0];
    int field_11c;      // 0x11c

    void sub_6ee8f0();
    int sub_6ee2f0(int a, int b);
    int sub_6ee3c0(int a);
    void sub_6ed410(int size, void* out);
    void sub_6ef210(int a, int b, int c, int d, int e);
    void sub_6ef4a0();
};

extern "C" int __stdcall IsRectEmpty(const void*);
extern "C" void __stdcall OffsetRect(void*, int, int);

void CXTPDockingPaneContext::sub_6ef4a0()
{
    int local_44;
    int local_48;
    int local_4c;
    int local_50;
    int local_34;
    int local_38;
    int local_3c;
    int local_40;
    int local_14;
    int local_18;
    int local_1c;
    int local_20;
    int local_24;
    int local_28;
    int local_2c;
    int local_30;

    if (IsRectEmpty(&this->rect0)) {
        this->field_cc = 0;
        this->sub_6ee8f0();
        return;
    }

    this->sub_6ed410(0x20, &local_34);

    int cx = (this->rect2 + this->rect0) / 2;
    int cy = (this->rect3 + this->rect1) / 2;

    local_44 = cx;
    local_48 = cy;
    local_4c = cx + local_34;
    local_50 = cy + local_38;

    OffsetRect(&local_44, -(local_34 / 2), -(local_38 / 2));

    if (this->field_cc != this->field_c8 || this->field_dc != 0) {
        this->sub_6ee8f0();

        if (this->field_c8 != 0) {
            int flags = 0;
            if (this->sub_6ee2f0(this->field_c8, 0)) flags = 1;
            if (this->sub_6ee2f0(this->field_c8, 1)) flags += 2;
            if (this->sub_6ee2f0(this->field_c8, 3)) flags += 8;
            if (this->sub_6ee2f0(this->field_c8, 2)) flags += 4;

            int v;
            if (this->field_11c != 0) {
                // call 0x66e170 with ecx = field_11c
                int (*fn)(void*) = (int (*)(void*))0x66e170;
                v = fn((void*)this->field_11c);
            } else {
                v = 0;
            }

            int extra;
            if (this->field_c8 != v && this->sub_6ee3c0(this->field_c8)) {
                extra = flags + 0x30;
            } else {
                extra = flags + 0x20;
            }

            this->sub_6ef210(local_44, local_48, local_4c, local_50, extra);
        }

        int (*fn2)(void*) = (int (*)(void*))0x66e190;
        int handle = fn2((void*)this->field_11c);
        local_14 = handle;

        // call 0x6e04a0 with ecx = handle, arg = &local_34
        void (*fn3)(void*, void*) = (void (*)(void*, void*))0x6e04a0;
        fn3((void*)handle, &local_34);

        if (this->sub_6ee2f0(handle, 2)) {
            this->sub_6ed410(4, &local_18);
            int a0 = local_18;
            int a1 = local_1c;

            this->sub_6ed410(4, &local_20);
            int b0 = local_20;
            int b1 = local_24;

            int dx = (local_34 + local_3c) / 2 - b0 / 2;
            int dy = local_38 + 0x10;

            this->sub_6ef210(dx, dy, a0 + dx, a1 + dy, 4);
        }

        if (this->sub_6ee2f0(handle, 0)) {
            this->sub_6ed410(1, &local_20);
            int a0 = local_20;
            int a1 = local_24;

            int dy = local_34 + 0x10;

            this->sub_6ed410(1, &local_18);
            int b1 = local_1c;

            int dx = (local_40 + local_38) / 2 - b1 / 2;

            this->sub_6ef210(dy, dx, a0 + dy, a1 + dx, 1);
        }

        if (this->sub_6ee2f0(handle, 3)) {
            this->sub_6ed410(8, &local_20);
            int a0 = local_20;
            int a1 = local_24;

            this->sub_6ed410(8, &local_28);
            int b1 = local_2c;

            int dy = local_40 - b1 - 0x10;

            this->sub_6ed410(8, &local_30);
            int c0 = local_30;
            int c1 = local_34;

            int dx = (local_3c + local_34) / 2 - c0 / 2;

            this->sub_6ef210(dx, dy, a0 + dx, a1 + dy, 8);
        }

        if (this->sub_6ee2f0(handle, 1)) {
            this->sub_6ed410(2, &local_30);
            int a0 = local_30;
            int a1 = local_34;

            this->sub_6ed410(2, &local_28);
            int b1 = local_2c;

            int dx = (local_40 + local_38) / 2 - b1 / 2;

            this->sub_6ed410(2, &local_20);
            int c0 = local_20;

            int dy = local_3c - c0 - 0x10;

            this->sub_6ef210(dx, dy, a0 + dx, a1 + dy, 2);
        }

        this->field_cc = this->field_c8;
    }
}
