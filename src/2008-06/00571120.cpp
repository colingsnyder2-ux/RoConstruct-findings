// from server: 48% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct ClassDescriptor {
    void* field0;
    char pad[0x2c];
    int field30;
    char pad2[0xc];
    void* field40;
    char pad3[4];
    void* field48;
    void* field4c;
    bool equals(void* a, void* b);
};

bool ClassDescriptor::equals(void* a, void* b) {
    void* (*getSomething)() = *(void* (*)())0x802890;
    if (a == 0) {
        getSomething();
        a = b;
        if (a == 0) {
            goto skip;
        }
    }
    void* ecx = *(void**)a;
    goto check;
skip:
    ecx = 0;
check:
    if (b == *(void**)((char*)ecx + 0x40)) {
        getSomething();
        a = b;
    }
    if (*(int*)((char*)b + 0x30) != 0) {
        return false;
    }
    void* edx = field40;
    void* ecx2 = field0;
    void* edi = *(void**)edx;
    if (a != 0 && a == ecx2) {
        goto skip2;
    }
    getSomething();
    a = b;
skip2:
    if (b == edi) {
        return false;
    }
    if (a != 0 && a == field48) {
        goto skip3;
    }
    getSomething();
    a = b;
skip3:
    if (a == field4c) {
        return false;
    }
    return true;
}
