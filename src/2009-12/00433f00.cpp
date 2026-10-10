// from server: 63% by atomic.potato
struct CPropGrid
{
    void UpdateItemsJob();
};

void CPropGrid::UpdateItemsJob()
{
    volatile unsigned int value;
    if (value != 4)
        value = value;
    else
    {
        volatile unsigned int *result;
        *result = 0x00b05658;
        ((volatile unsigned char *)result)[4] = 0;
        ((volatile unsigned char *)result)[5] = 0;
    }
}
