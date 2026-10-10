// from server: 55% by colin
struct Contact {
    int field0;
    int field4;
    int field8;
    void updateContact(int a, int b);
};

void Contact::updateContact(int a, int b) {
    int old = field4;
    field4 = a;
    if (!(*(volatile unsigned char*)0x8c7fd0 & 1)) {
        *(volatile unsigned int*)0x8c7fd0 |= 1;
        *(volatile int*)0x8c7fcc = 10;
    }
    int limit = *(volatile int*)0x8c7fcc;
    int cur = field4;
    int cap = field8;
    if (cur > cap) {
        if (cap == 0) {
            field8 = a;
            ((void (__thiscall*)(Contact*, int))0x599700)(this, old);
            return;
        }
        if (cur >= limit) {
            float f = *(float*)0x797b38;
            unsigned int sz = (unsigned int)cap * 4;
            if (sz > 0x61a80) {
                f = *(float*)0x797b34;
            } else if (sz > 0xfa00) {
                f = *(float*)0x797988;
            }
            int tmp = cap;
            float prod = f * (float)tmp;
            int r = ((int (__cdecl*)(float))0x630d60)(prod);
            r = r - tmp + cur;
            field8 = r;
            int lim2 = *(volatile int*)0x8c7fcc;
            if (r < lim2) {
                field8 = lim2;
            }
            ((void (__thiscall*)(Contact*, int))0x599700)(this, old);
            return;
        }
        field8 = limit;
        ((void (__thiscall*)(Contact*, int))0x599700)(this, old);
        return;
    }
    int third = cap / 3;
    if (cur <= third && *(volatile char*)0x18 != 0 && cur > limit) {
        if (cur >= old) {
            cur = old;
        }
        ((void (__thiscall*)(Contact*, int))0x599700)(this, cur);
    }
}
