// from server: 93% by colin
extern "C" void* __cdecl func_0062fef6(int);

int* g_8bf9c4;
int g_8bf9c8;

void func_004ca5f0()
{
    int v = g_8bf9c8 + 1;
    g_8bf9c8 = v;
    if (v == 1)
    {
        int* p = (int*)func_0062fef6(0xc);
        if (p != 0)
        {
            p[2] = 0;
            p[0] = 0;
            p[1] = 0;
            g_8bf9c4 = p;
        }
        else
        {
            g_8bf9c4 = 0;
        }
    }
}
