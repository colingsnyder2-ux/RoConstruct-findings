// from server: 36% by atomic.potato
unsigned int f()
{
    volatile unsigned int value = 0x6666666;
    volatile unsigned int result;
    if (value > 0)
        result = value;
    else
        result = 1;
    return result;
}
