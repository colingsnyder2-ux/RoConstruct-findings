// from server: 94% by atomic.potato
extern "C" int __stdcall sub_567df0(int, int, int, int);

int __stdcall sub_568960(int a, int b)
{
    int value = sub_567df0(a, b, 0, 0);
    if (value == 0)
        return -1;
    return *(unsigned short *)(value + 0x1380);
}
