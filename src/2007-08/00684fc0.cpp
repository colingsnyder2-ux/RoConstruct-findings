// from server: 35% by colin
extern "C" {
    int __stdcall wcsstr(const unsigned short*, const unsigned short*);
    int __stdcall memcpy_s(void*, unsigned int, const void*, unsigned int);
    int __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);
}

struct CXTPPropExchange {
    int ExchangeWideString(unsigned short**, unsigned short**, unsigned short**);
};

int CXTPPropExchange::ExchangeWideString(unsigned short** a, unsigned short** b, unsigned short** c) {
    unsigned short* s1 = *a;
    int len1;
    if (s1 == 0) {
        len1 = 0;
    } else {
        unsigned short* p = s1;
        unsigned short* q = p + 1;
        while (*p != 0) {
            p++;
        }
        len1 = (int)(p - q);
    }
    unsigned short* s2 = *b;
    if (s2 == 0) return 0;
    int len2;
    {
        unsigned short* p = s2;
        unsigned short* q = p + 1;
        while (*p != 0) {
            p++;
        }
        len2 = (int)(p - q);
    }
    if (len2 == 0) return 0;
    if (len1 == 0) return 0;
    unsigned short* s3 = *c;
    int len3;
    if (s3 == 0) {
        len3 = 0;
    } else {
        unsigned short* p = s3;
        unsigned short* q = p + 1;
        while (*p != 0) {
            p++;
        }
        len3 = (int)(p - q);
    }
    int count = 0;
    unsigned short* found = (unsigned short*)wcsstr(s1, s2);
    if (found == 0) return 0;
    while (1) {
        found = (unsigned short*)wcsstr(found + len2, s2);
        count++;
        if (found == 0) break;
    }
    if (count <= 0) return 0;
    unsigned short* base = *a;
    unsigned short* pos = (unsigned short*)wcsstr(base, s2);
    if (pos == 0) return 0;
    int step = len3 * 2;
    int adjust = len3 - len2;
    while (1) {
        unsigned short* cur = *a;
        int off = (int)(pos - cur);
        int newlen = len1 - (off / 2) - len2;
        int bytes = newlen * 2;
        memmove_s(pos + len2 + adjust, bytes, pos + len2, bytes);
        memcpy_s(pos, step, s3, step);
        *c = *c + len3;
        pos[step / 2] = 0;
        pos = (unsigned short*)wcsstr(pos + len2, s2);
        if (pos == 0) break;
    }
    return count;
}
