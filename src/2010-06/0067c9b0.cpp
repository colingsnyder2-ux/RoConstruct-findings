// from server: 82% by atomic.potato
extern "C" void func_0067ac90(unsigned int);

void func_0067c9b0(void* a, void* b, unsigned int c)
{
    if (c != 4)
    {
        func_0067ac90(c);
        return;
    }

    *(unsigned int*)b = 0x00bc10a0;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
