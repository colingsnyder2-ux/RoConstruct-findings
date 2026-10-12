// from server: 46% by colin
extern "C" char* __stdcall strncpy(char*, const char*, unsigned int);

char* __fastcall f(char* dst, int, const char* src)
{
    char* p = dst;
    int i = 0;
    do {
        unsigned char c = (unsigned char)src[i + 0x11c];
        int t = c - 0x41;
        i++;
        if (t <= 0x39 && (c <= 0x5a || c >= 0x61)) {
            *p = (char)c;
        } else {
            *p = '[';
            p++;
            *p = "0123456789ABCDEF"[(c >> 4) & 0xf];
            p++;
            *p = "0123456789ABCDEF"[c & 0xf];
            p++;
            *p = ']';
        }
        p++;
    } while (i < 4);

    if (src == 0) {
        *p = 0;
        return dst;
    }
    *p = ':';
    p++;
    *p = ' ';
    p++;
    strncpy(p, src, 0x3f);
    p[0x3f] = 0;
    return dst;
}
