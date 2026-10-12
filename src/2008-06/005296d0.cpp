// from server: 76% by king_originala
extern "C" char * __cdecl strncpy(char *, const char *, unsigned int);
extern const char digits[];

void __fastcall f(char *dst, const char *message, const unsigned char *src)
{
    int n = 0;
    int i = 0;
    do {
        int c = src[i + 0x11c];
        unsigned int t = (unsigned int)(c - 0x41);
        ++i;
        if (t <= 0x39 && (c <= 0x5a || c >= 0x61)) {
            dst[n] = (char)c;
        } else {
            dst[n] = '[';
            ++n;
            dst[n] = digits[(c >> 4) & 0xf];
            ++n;
            dst[n] = digits[c & 0xf];
            ++n;
            dst[n] = ']';
        }
        ++n;
    } while (i < 4);

    if (message == 0) {
        dst[n] = 0;
        return;
    }
    dst[n] = ':';
    ++n;
    dst[n] = ' ';
    ++n;
    dst += n;
    strncpy(dst, message, 0x3f);
    dst[0x3f] = 0;
}
