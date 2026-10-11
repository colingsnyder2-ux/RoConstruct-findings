// from server: 95% by atomic.potato
extern "C" void __cdecl sub_571020(void *, int);

int dword_B82724;

struct CSHA1
{
    int __stdcall f(void *);
};

int __stdcall CSHA1::f(void *p)
{
    int n = dword_B82724;
    if (n > 1)
    {
        unsigned char *q = (unsigned char *)p + 16;
        int i = n - 1;
        do
        {
            sub_571020(q, 4);
            q += 16;
            --i;
        } while (i != 0);
    }
    return 0;
}
