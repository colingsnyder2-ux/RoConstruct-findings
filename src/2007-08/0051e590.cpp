// from server: 50% by tester
extern "C" char* __stdcall strncpy(char* dest, const char* src, unsigned int count);

char* format_png_error(char* dst, const char* msg, unsigned int len)
{
    char* out = dst;
    int i = 0;
    do {
        unsigned char c = (unsigned char)msg[i + 0x11c];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            *out = (char)c;
        } else {
            *out = '[';
            out++;
            *out = "0123456789ABCDEF"[(c >> 4) & 0xF];
            out++;
            *out = "0123456789ABCDEF"[c & 0xF];
            out++;
            *out = ']';
        }
        out++;
        i++;
    } while (i < 4);

    if (len == 0) {
        *out = 0;
        return dst;
    }

    *out = ':';
    out++;
    *out = ' ';
    out++;
    out += len;
    strncpy(out, msg, 0x3f);
    out[0x3f] = 0;
    return dst;
}
