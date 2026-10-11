// from server: 93% by atomic.potato
extern "C" int __cdecl feof(void*);
extern "C" unsigned int __cdecl fread(void*, unsigned int, unsigned int, void*);

struct S {
    int __cdecl f(int* a, int* b);
};

int S::f(int* a, int* b)
{
    if (*a != 0) {
        *a = 0;
        *b = 1;
        return 0x798e58;
    }
    if (feof((void*)a[1]) != 0) {
        return 0;
    }
    unsigned int n = fread((void*)(a + 2), 1, 0x200, (void*)a[1]);
    *b = n;
    return (n == 0) ? 0 : (int)(a + 2);
}
