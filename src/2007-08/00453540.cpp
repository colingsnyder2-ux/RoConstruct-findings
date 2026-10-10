// from server: 37% by colin
extern unsigned char G_flag;
extern void* G_ptr;
extern unsigned int G_cookie;

extern "C" void* __stdcall sub_0052c940(int, int);

void* sub_00453540()
{
    if ((G_flag & 1) == 0)
    {
        G_flag |= 1;
        G_ptr = sub_0052c940(-1, (int)0x8a5afc);
    }
    return G_ptr;
}
