// from server: 67% by atomic.potato
extern "C" int __stdcall lstrlenW(const unsigned short *);
extern "C" int __cdecl memcpy_s(void *, unsigned int, const void *, unsigned int);

struct S
{
    int __cdecl f(void *, const unsigned short *, unsigned int);
};

int S::f(void *a, const unsigned short *b, unsigned int c)
{
    unsigned int n = (unsigned int)lstrlenW(b);
    return !memcpy_s(a, c, b, n + n + 2);
}
