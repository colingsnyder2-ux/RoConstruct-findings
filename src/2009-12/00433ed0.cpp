// from server: 60% by atomic.potato
struct CPropGrid
{
    static void UpdateItemsJob(int, void *, unsigned int);
};

void CPropGrid::UpdateItemsJob(int, void *value, unsigned int kind)
{
    if (kind != 4)
        return;
    *(unsigned int *)value = 0x00b055a8;
    *((unsigned char *)value + 4) = 0;
    *((unsigned char *)value + 5) = 0;
}
