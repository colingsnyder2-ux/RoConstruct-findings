// from server: 33% by atomic.potato
struct ThreadLogManager {
    void f(char *);
};

extern "C" void *__stdcall sub_6a0920(unsigned int);
extern "C" void __stdcall sub_427ba0(void *, void *);
extern "C" void __stdcall sub_40e160(void *, void *, void *);
extern "C" void __stdcall sub_428310(void *, void *);
extern "C" void __stdcall sub_429aa0(void *, void *);

extern "C" void *__stdcall sub_802fe0();
extern "C" void *__stdcall sub_803384(void *, unsigned int);
extern "C" void *__stdcall sub_802b14(void *);
extern "C" void *__stdcall sub_803380(void *, int);
extern "C" void *__stdcall sub_803ee0(void *, void *);
extern "C" void *__stdcall sub_803f14(void *);
extern "C" void *__stdcall sub_802458(void *, const char *);
extern "C" void *__stdcall sub_802468(void *);
extern "C" void *__stdcall sub_802464(void *);
extern "C" void *__stdcall sub_8023e0(void *, int, int, void *);
extern "C" void *__stdcall sub_8023e4(void *, const char *, void *);
extern "C" void *__stdcall sub_80240c(void *, void *);
extern "C" void *__stdcall sub_802204(void *, void *);
extern "C" void *__stdcall sub_802208(void *);

void ThreadLogManager::f(char *arg) {
    char buf[0x300];
    void *h;
    void *find;
    void *str1;
    void *str2;
    void *str3;
    int i;

    h = sub_6a0920(4);
    if (h) {
        *(char **)h = arg;
    } else {
        h = 0;
    }
    *(void **)arg = h;
    *(void **)(arg + 0xc) = 0;
    *(void **)(arg + 0x10) = 0;
    *(void **)(arg + 0x14) = 0;

    sub_427ba0((char *)this + 4, buf);

    i = (int)sub_802fe0();
    i = (int)sub_803384(buf, i + 1);
    sub_802b14((void *)i);
    sub_803380(buf, -1);

    sub_40e160(buf, "archive\\", "*.dmp");
    sub_803ee0(buf, buf + 0x74);
    find = sub_802208(buf + 0x74);
    *(void **)buf = find;

    sub_803f14(buf + 0xc);

    if (find != (void *)-1) {
        do {
            if (*(unsigned char *)(buf + 0x74) & 0x10) {
                goto next;
            }
            sub_802458(buf + 0x1c, "archive\\");
            sub_40e160(buf + 0x1c, buf + 0x1c, buf + 0xbc);
            sub_803ee0(buf + 0x1c, buf + 0x1c);
            sub_428310(buf + 0x1c, buf + 0x74);
            sub_429aa0(arg, buf + 0x1c);
            sub_802468(buf + 0x1c);
            sub_802468(buf + 0x1c);
            sub_802464(buf + 0x1c);
            sub_40e160(buf + 0x1c, buf + 0x1c, buf + 0x1b4);
            sub_803ee0(buf + 0x1c, buf + 0x1c);
            sub_802208(buf + 0x1c);
            sub_803f14(buf + 0x1c);
            if (find != (void *)-1) {
                do {
                    if (*(unsigned char *)(buf + 0x1b4) & 0x10) {
                        goto next2;
                    }
                    sub_802458(buf + 0x1c, "archive\\");
                    sub_40e160(buf + 0x1c, buf + 0x1c, buf + 0x1fc);
                    sub_803ee0(buf + 0x1c, buf + 0x1c);
                    sub_428310(buf + 0x1c, buf + 0x1b4);
                    sub_429aa0(arg, buf + 0x1c);
                    sub_802468(buf + 0x1c);
                    sub_803f14(buf + 0x1c);
                next2:
                    if (sub_802204(buf + 0x1b4, find)) {
                        goto next2;
                    }
                } while (1);
            }
            sub_802468(buf + 0x1c);
            find = *(void **)buf;
        next:
            if (sub_802204(buf + 0x74, find)) {
                goto next;
            }
        } while (1);
    }
    sub_803f14(buf + 0xc);
}
