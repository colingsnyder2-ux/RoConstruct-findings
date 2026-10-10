// from server: 70% by colin
struct S {
    void* vtable;
    char pad[0x20];
    int* field24;
    char pad2[0xc];
    int* field34;
    char pad3[0x8];
    char field40[0x4c];
    int field8c;
    unsigned int field9c;
    int method_552090();
    int method_54f930(int, char*, int);
    int method_5521e0(int);
};

int S::method_5521e0(int arg)
{
    if (((field9c >> 3) & 1) != 0 && *field24 == 0) {
        void** vt = *(void***)this;
        void (*fn)(void*) = (void (*)(void*))vt[0x58 / 4];
        fn(this);
    }

    if (arg == -1)
        return 0;

    if (((field9c >> 3) & 1) != 0) {
        int a = *field24;
        int b = *field34;
        int sum = b + a;
        if (a == sum) {
            method_552090();
            a = *field24;
            b = *field34;
            sum = b + a;
            if (a == sum)
                return -1;
        }
        *(char*)a = (char)arg;
        *field34 = *field34 - 1;
        *field24 = *field24 + 1;
        return arg;
    } else {
        char local;
        local = (char)arg;
        if (method_54f930(field8c, &local, 1) != 1)
            return -1;
        return arg;
    }
}
