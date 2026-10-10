// from server: 30% by colin
extern unsigned char G_flag;
extern void* G_ptr;

void* __stdcall sub_0052c940(int, int);

void func_0040ed00()
{
    if ((G_flag & 1) == 0)
    {
        G_flag |= 1;
        G_ptr = sub_0052c940(-1, 0x78fa4c);
    }
}
