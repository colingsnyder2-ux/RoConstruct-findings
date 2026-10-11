// from server: 36% by atomic.potato
extern "C" int __cdecl func_006322e0(const char*);

int* g_00b85eac;
unsigned int g_00b85eb0;

void func_00648970()
{
    if ((g_00b85eb0 & 1) == 0)
    {
        g_00b85eb0 |= 1;
        g_00b85eac = (int*)func_006322e0((const char*)0x00b51f3c);
    }
}
