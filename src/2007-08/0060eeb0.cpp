// from server: 45% by colin
extern "C" {
    unsigned int __stdcall strcspn(const char*, const char*);
    char* __stdcall strncat(char*, const char*, unsigned int);
    char* __stdcall strncpy(char*, const char*, unsigned int);
}

extern char g_79448c;
extern char g_7c3108;
extern char g_7c310a;
extern char g_7c310c;
extern char g_7c3110;
extern char g_7c3114;
extern char g_7c3118;

struct S {
    void f(char* dst, const char* src, unsigned int n);
};

void S::f(char* dst, const char* src, unsigned int n)
{
    if (*src != '=') {
        strncpy(dst, src + 1, n);
        dst[n - 1] = 0;
        return;
    }
    if (*src == '@') {
        unsigned int len;
        const char* p;
        unsigned int avail;
        char* q;
        unsigned int i;

        src++;
        p = src;
        while (*p) p++;
        len = (unsigned int)(p - src);
        avail = n - 8;
        *dst = 0;
        if (len > avail) {
            src += len - avail;
            q = dst - 1;
            while (*++q) {}
            *(unsigned int*)q = *(unsigned int*)&g_7c3118;
        }
        p = src;
        while (*p) p++;
        len = (unsigned int)(p - src);
        q = dst - 1;
        while (*++q) {}
        {
            unsigned int c = len >> 2;
            unsigned int* d4 = (unsigned int*)q;
            const unsigned int* s4 = (const unsigned int*)src;
            while (c--) *d4++ = *s4++;
            c = len & 3;
            {
                char* d1 = (char*)d4;
                const char* s1 = (const char*)s4;
                while (c--) *d1++ = *s1++;
            }
        }
        return;
    }
    {
        unsigned int len;
        const char* p;
        unsigned int avail;
        char* q;
        unsigned int i;

        len = strcspn(src, &g_79448c);
        avail = n - 0x11;
        if (len > avail) len = avail;
        *(unsigned int*)dst = *(unsigned int*)&g_7c310c;
        *(unsigned int*)(dst + 4) = *(unsigned int*)&g_7c3110;
        *(unsigned short*)(dst + 8) = *(unsigned short*)&g_7c3114;
        if (src[len]) {
            strncat(dst, src, len);
            q = dst - 1;
            while (*++q) {}
            *(unsigned int*)q = *(unsigned int*)&g_7c3118;
        } else {
            p = src;
            while (*p) p++;
            len = (unsigned int)(p - src);
            q = dst - 1;
            while (*++q) {}
            {
                unsigned int c = len >> 2;
                unsigned int* d4 = (unsigned int*)q;
                const unsigned int* s4 = (const unsigned int*)src;
                while (c--) *d4++ = *s4++;
                c = len & 3;
                {
                    char* d1 = (char*)d4;
                    const char* s1 = (const char*)s4;
                    while (c--) *d1++ = *s1++;
                }
            }
        }
        q = dst - 1;
        while (*++q) {}
        *(unsigned short*)q = *(unsigned short*)&g_7c3108;
        *(q + 2) = g_7c310a;
    }
}
