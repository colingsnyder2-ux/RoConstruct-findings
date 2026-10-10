// from server: 42% by colin
// roc 2007-08 0046de30  unit: RBX::LDraw2Lua::LuaWriter  size: 533 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046de30

extern "C" {
    void* __stdcall sub_46D600();
    bool __cdecl sub_46DCE0(void*);
    bool __cdecl sub_5085B0(void*, void*);
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6AC(void*);
}

struct S {
    void f();
};

void S::f()
{
    void* p = sub_46D600();
    char buf1[32];
    char buf2[32];
    char buf3[32];
    char buf4[32];
    char buf5[32];
    int state = 0;
    bool found = false;

    sub_77E698(buf1);
    state = 1;
    if (sub_46DCE0(buf1)) {
        sub_77E698(buf2);
        state = 3;
        if (!sub_5085B0(p, buf2)) {
            sub_77E698(buf3);
            state = 7;
            if (!sub_5085B0(p, buf3)) {
                sub_77E698(buf4);
                state = 0xf;
                if (!sub_5085B0(p, buf4)) {
                    sub_77E698(buf5);
                    state = 0x1f;
                    if (sub_5085B0(p, buf5)) {
                        found = true;
                    }
                } else {
                    found = true;
                }
            } else {
                found = true;
            }
        } else {
            found = true;
        }
    }

    if (found) {
        *(volatile char*)0x8bcf5a = 1;
    } else {
        *(volatile char*)0x8bcf5a = 0;
    }

    if (state & 0x10) {
        state &= ~0x10;
        sub_77E6AC(buf5);
    }
    if (state & 8) {
        state &= ~8;
        sub_77E6AC(buf4);
    }
    if (state & 4) {
        state &= ~4;
        sub_77E6AC(buf3);
    }
    if (state & 2) {
        state &= ~2;
        sub_77E6AC(buf2);
    }
    if (state & 1) {
        sub_77E6AC(buf1);
    }
}
