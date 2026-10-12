// from server: 70% by king_originala
struct Buffer
{
    void reset(int *);
};

struct S
{
    void closeBase(int);
    void close(int);
};

void S::close(int mode)
{
    closeBase(mode);
    int value = *(int *)((char *)this + 0xa0);
    try
    {
        if ((unsigned char)(mode & 1) != 1)
        {
            mode = value;
            ((Buffer *)((char *)this + 0x40))->reset(&mode);
        }
    }
    catch (...)
    {
    }
}
