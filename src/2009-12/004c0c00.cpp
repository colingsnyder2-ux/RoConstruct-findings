// from server: 27% by atomic.potato
extern "C" void target(int, int, int value)
{
    if (value != 4)
    {
        target(0, 0, value);
        return;
    }
    int *p = (int *)0;
    *p = 0xb10698;
    ((char *)p)[4] = 0;
    ((char *)p)[5] = 0;
}
