// from server: 91% by TrollStein
struct S {
};

void __cdecl f(int* a, unsigned char* b, unsigned int n)
{
    unsigned int i = 0;
    unsigned int h = 0xf8c9;
    if (n > 0) {
        do {
            h = (unsigned int)(*a) * h + b[i];
            *a = (int)h;
            i++;
        } while (i < n);
    }
    *a &= 0x7fffffff;
}
