// from server: 39% by atomic.potato
struct StreamBuf {
    char pad[0x3c];
    unsigned char flag;
};

struct String {
    char pad[0x1c];
};

struct OutString {
    char pad[0x1c];
};

extern "C" {
    int __stdcall sub_802460(int);
    int __stdcall sub_802374(void*, void*, int);
    int __stdcall sub_8024b4(void*, int);
}

void __stdcall sub_5f5970(void*, int);
void __stdcall sub_6a158c(void*, void*);

extern char G_8f6a34;

void __stdcall func_005f67e0(void* a, int b)
{
    void* p = 0;
    int count = 0;
    void* sb = 0;
    sub_802460(0);
    void** pp = (void**)b;
    int state = 1;
    while (1) {
        int r;
        StreamBuf* s = (StreamBuf*)*pp;
        r = sub_802374(s, &sb, 1);
        if (r == 0) {
            r = -(int)s->flag;
            r = (r != 0) ? 1 : 0;
            r = -r;
        }
        if (r == -1) break;
        count += r;
        if (count < 1) continue;
        break;
    }
    if (count != 0) {
        if (count == 1) {
            unsigned char c = *(unsigned char*)&sb;
            if (c == 0xff) goto L896;
            if (c == 0) goto L8b0;
            sub_8024b4(*(void**)&p, c);
            goto L830;
        }
        if (count == -1) goto L896;
        sub_8024b4(*(void**)&p, -2);
        goto L830;
    }
L896:
    sub_5f5970(&p, 4);
    sub_6a158c(&p, &G_8f6a34);
L8b0:
    return;
L830:
    goto L830;
}
