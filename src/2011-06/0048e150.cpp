// from server: 99% by atomic.potato
typedef unsigned long DWORD;

extern DWORD g_00CB4178;
extern DWORD g_00CB4170;
extern DWORD g_00CB4174;

extern void G1_func_0080b15d(const char *);

void func_0048e150()
{
    if ((g_00CB4178 & 1) == 0)
    {
        g_00CB4178 |= 1;
        g_00CB4170 = 0;
        g_00CB4174 = 0;
        G1_func_0080b15d("8csm");
    }
}
