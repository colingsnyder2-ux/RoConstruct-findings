// from server: 31% by colin
struct String {
    unsigned char data[28];
    String(const char *text);
    ~String();
};

struct RuntimeError {
    unsigned char data[40];
    RuntimeError(const String &message);
    RuntimeError(const RuntimeError &other);
    ~RuntimeError();
};

struct ReplicatorStatsItem {
    void process(void *arg);
};

extern "C" {
    int __stdcall sub_56cdf0();
    int __stdcall sub_56cc30();
    int __stdcall sub_56cbc0();
    int __stdcall sub_56cca0();
    int __stdcall sub_56cd10();
    int __stdcall sub_56d120();
    int __stdcall sub_56cf40();
    int __stdcall sub_56ce60();
    int __stdcall sub_599a00();
    int __stdcall sub_56cd80();
    int __stdcall sub_6a17c6(int, int, int, int, int);
    void __stdcall sub_4a5b30(int, int);
    void __stdcall sub_4a6250(int, int);
    void __stdcall sub_4a67c0(int, int);
    void __stdcall sub_4a7150(int);
    void __stdcall sub_4a75b0(int, int);
    void __stdcall sub_4a9440(int, int);
    void __stdcall sub_4acd50(int, int);
    void __stdcall sub_4acdb0(int, int);
    void __stdcall sub_4ad1e0(int, int);
    void __stdcall sub_4ad240(int, int);
    void __stdcall sub_4adac0(int, int);
    void __stdcall sub_4adaf0(int, int);
    void __stdcall sub_4adb20(int, int);
    void __stdcall sub_4ae7d0(int, int);
    void __stdcall sub_4a6d60(int, int);
    void __stdcall sub_4a5a70(int, int);
    int __stdcall sub_4b6730(int, int, int);
}

void ReplicatorStatsItem::process(void *arg)
{
    int *p = (int *)arg;
    int *slot = (int *)((char *)this + 0x2cd4);
    int old = *slot;
    *slot = (int)p;

    int type = *p;
    if (*(int *)(type + 0x14) == sub_56cdf0()) {
        int r = sub_4b6730((int)this, (int)p, (int)type);
        sub_4a7150(r + 0xe24);
    } else if (*(int *)(type + 0x14) == sub_56cc30()) {
        sub_4a5b30((int)p, (int)&p);
        if (*(int *)((char *)p + 4) != 0)
            sub_4ad1e0((int)p, (int)&p);
    } else if (*(int *)(type + 0x14) == sub_56cbc0()) {
        sub_4a6250((int)p, (int)&p);
        if (*(int *)((char *)p + 4) != 0)
            sub_4ad240((int)p, (int)&p);
    } else if (*(int *)(type + 0x14) == sub_56cca0()) {
        sub_4adac0((int)p, (int)p);
    } else if (*(int *)(type + 0x14) == sub_56cd10()) {
        sub_4ae7d0((int)p, (int)p);
    } else if (*(int *)(type + 0x14) == sub_56d120()) {
        sub_4a75b0((int)p, (int)p);
    } else if (*(int *)(type + 0x14) == sub_56cf40()) {
        sub_4adaf0((int)p, (int)p);
    } else if (*(int *)(type + 0x14) == sub_56ce60()) {
        if (*p == 0x976148) {
            float f = 0.0f;
            sub_4a67c0((int)p, (int)&f);
            if (*(int *)((char *)p + 4) != 0)
                sub_4acd50((int)p, (int)&f);
        } else {
            sub_4acdb0((int)p, (int)p);
        }
    } else if (*(int *)(type + 0x14) == sub_599a00()) {
        sub_4adb20((int)p, (int)p);
    } else if (sub_6a17c6((int)type, 0, 0x9295b4, 0x92fea4, 0) != 0) {
        sub_4a5a70((int)p, (int)p);
    } else if (sub_6a17c6((int)type, 0, 0x9295b4, 0x92fe70, 0) != 0) {
        sub_4a9440((int)this, (int)p);
    } else if (*(int *)(type + 0x14) == sub_56cd80()) {
        sub_4a6d60((int)p, (int)p);
    }

    *slot = old;
}
