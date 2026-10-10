// from server: 26% by colin
struct CXTPControlWindowList {
    void* FormatLabel(void* arg1, int arg2, void* arg3);
};

extern "C" {
    int __stdcall _ismbblead(unsigned int c);
    void* __stdcall sub_77DDAC(void*);
    void* __stdcall sub_77DD98(void*);
    int __stdcall sub_77DCC8(void*);
    void* __stdcall sub_77D560(void*, int);
    void* __stdcall sub_77D55C(void*, int);
    void* __stdcall sub_77DD74(void*, void*);
    void* __stdcall sub_77DDBC(void*);
    void* __stdcall sub_77DD94(void*, const char*, ...);
}

void* CXTPControlWindowList::FormatLabel(void* arg1, int arg2, void* arg3) {
    char buf1[16];
    char buf2[16];
    char* p;
    char* q;
    char c;
    int n;

    sub_77DDAC(buf1);
    sub_77DDAC(buf2);

    q = (char*)sub_77DD98(arg1);
    n = sub_77DCC8(arg1);
    p = (char*)sub_77D560(buf1, n * 2);

    c = *q;
    if (c != 0) {
        do {
            if (c == '&') {
                *p = c;
                p++;
            }
            if (_ismbblead((unsigned char)*q)) {
                *p = *q;
                p++;
                q++;
            }
            *p = *q;
            q++;
            p++;
            c = *q;
        } while (c != 0);
    }
    *p = 0;

    sub_77D55C(buf1, -1);
    sub_77DDAC(buf2);

    if (arg2 == 0) {
        sub_77DD74(arg3, buf1);
    } else if (arg2 < 10) {
        sub_77DD94(buf2, "%i %s", arg2, sub_77DD98(buf1));
        sub_77DD74(arg3, buf2);
    } else if (arg2 == 10) {
        sub_77DD94(buf2, "1&0 %s", sub_77DD98(buf1));
        sub_77DD74(arg3, buf2);
    } else {
        sub_77DD94(buf2, "&%i %s", arg2, sub_77DD98(buf1));
        sub_77DD74(arg3, buf2);
    }

    sub_77DDBC(buf1);
    sub_77DDBC(buf2);
    return arg3;
}
