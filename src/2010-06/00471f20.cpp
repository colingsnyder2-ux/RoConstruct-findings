// from server: 70% by atomic.potato
extern "C" void Function_004719c0(int, int, int);

struct CScriptDoc
{
    void __cdecl f(int, int);
};

void CScriptDoc::f(int a, int b)
{
    if (b != 4)
        Function_004719c0(0, a, b);
    else
    {
        *(int*)a = 0x00b84fa0;
        *((char*)a + 4) = 0;
        *((char*)a + 5) = 0;
    }
}
