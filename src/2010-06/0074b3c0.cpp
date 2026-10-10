// from server: 92% by atomic.potato
struct S
{
    int Get(int flag);
    int *pad;
    int *p8;
    int *pC;
};

int S::Get(int flag)
{
    if (flag == 0)
        return p8[3];
    return pC[3];
}
