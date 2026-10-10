// from server: 23% by colin
struct S {
    char pad0[0x14];
    char* begin;
    char* cur;
    char* end;
    char pad1[4];
    unsigned int flags;

    int f(char* a, int b, int c);
};

extern "C" int __stdcall memmove_s(void*, unsigned int, const void*, unsigned int);
extern "C" int __stdcall sputn(void*, const char*, int);

int S::f(char* a, int b, int c)
{
    char* p;
    char* q;
    int n;
    int m;
    int r;
    char* base;
    char* src;
    int len;
    int i;
    int j;

    if ((flags & 2) == 0) {
        flags |= 2;
        cur = begin;
        end = begin + (int)pad0;
    }

    p = a;
    q = a + b;
    base = begin;
    if (p == q)
        return (int)(p - q);

    while (p != q) {
        if (cur == end) {
            len = (int)(cur - begin);
            r = sputn(this, begin, len);
            if (r < len && r > 0) {
                memmove_s(begin, len - r, begin + r, len - r);
            }
            cur = begin + (len - r);
            end = begin + (int)pad0;
            if (r == 0)
                break;
        }
        n = (int)(end - cur);
        m = (int)(q - p);
        if (m < n)
            n = m;
        memmove_s(cur, n, p, n);
        cur += n;
        p += n;
    }

    return (int)(p - a);
}
