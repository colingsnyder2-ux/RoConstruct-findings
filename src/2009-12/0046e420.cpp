// from server: 63% by atomic.potato
struct CScriptDoc
{
    void __cdecl f(int, int, int);
};

void CScriptDoc::f(int, int, int value)
{
    if (value != 4)
    {
        extern void G1_func_0046def0();
        G1_func_0046def0();
        return;
    }

    int *p = (int *)0;
    p = *(int **)((char *)&value - 4);
    *p = 0x00b0b698;
    *((char *)p + 4) = 0;
    *((char *)p + 5) = 0;
}
