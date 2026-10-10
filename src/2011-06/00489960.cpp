// from server: 88% by atomic.potato
int g_00c18b6c;
int g_00c18b70;
int g_00cb412c;

int func_00489960()
{
    if (!(g_00cb412c & 1))
    {
        g_00cb412c |= 1;
        g_00c18b6c = 0;
        g_00c18b70 = 0;
    }
    return 0x00c18b60;
}
