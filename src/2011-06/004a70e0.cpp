// from server: 61% by atomic.potato
extern "C" void __cdecl func_004a4580();

void func_004a70e0(int, char* value, int type)
{
    if (type != 4)
    {
        func_004a4580();
        return;
    }

    *(int*)value = 0x00c1a5e8;
    value[4] = 0;
    value[5] = 0;
}
