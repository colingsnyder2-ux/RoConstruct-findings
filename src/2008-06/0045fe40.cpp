// from server: 78% by atomic.potato
extern unsigned char g_0096df84;
extern int g_00932ec8;
extern int g_00932ecc;
extern int g_00932ebc;

int func_0045fe40()
{
    if ((g_0096df84 & 1) == 0)
    {
        g_0096df84 |= 1;
        g_00932ec8 = 0;
        g_00932ecc = 0;
    }
    return g_00932ebc;
}
