// from server: 61% by atomic.potato
extern "C" void G1_func_00471a30();

struct CScriptDoc
{
    void __cdecl f(void *, unsigned int);
};

void CScriptDoc::f(void *a, unsigned int b)
{
    if (b != 4)
    {
        G1_func_00471a30();
        return;
    }

    unsigned char *p = (unsigned char *)a;
    *(unsigned int *)p = 0x00b85058;
    p[4] = 0;
    p[5] = 0;
}
