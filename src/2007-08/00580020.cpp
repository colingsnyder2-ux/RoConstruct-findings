// from server: 62% by colin
struct Workspace {
    void sub_00580020(bool);
};

extern "C" {
    void __stdcall GetLocalTime(void*);
    int __cdecl sprintf(char*, const char*, ...);
}

struct Ostream {
    void flush();
};

void Workspace::sub_00580020(bool flag)
{
    char timebuf[16];
    GetLocalTime(timebuf);

    char buf1[32];
    char buf2[32];

    if (flag) {
        unsigned short w0 = *(unsigned short*)(timebuf + 0);
        unsigned short w1 = *(unsigned short*)(timebuf + 2);
        unsigned short w2 = *(unsigned short*)(timebuf + 6);
        sprintf(buf1, "%02u.%02u.%u ", w0, w1, w2);
        ((Ostream*)((char*)this + 0x0))->flush();
    }

    unsigned short w3 = *(unsigned short*)(timebuf + 0x0e);
    unsigned short w4 = *(unsigned short*)(timebuf + 0x0a);
    unsigned short w5 = *(unsigned short*)(timebuf + 0x08);
    sprintf(buf2, "%02u:%02u.%03u ", w3, w4, w5);
    ((Ostream*)((char*)this + 0x0))->flush();
}
