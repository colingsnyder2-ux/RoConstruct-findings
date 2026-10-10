// from server: 44% by colin
struct FactoryProduct {
    char pad0[8];
    int field8;
    char padC[0x14];
    int field20;
    char pad24[0x5c];
    int field80;
    char pad84[0x60];
    int fieldE4;

    void construct(int* src);
};

void FactoryProduct::construct(int* src)
{
    if (field8 != 0)
        return;

    int* dst = (int*)((char*)this + 0x84);
    for (int i = 0; i < 9; ++i)
        dst[i] = src[i];

    float* fd = (float*)dst;
    float* fs = (float*)src;
    fd[9] = fs[9];
    fd[10] = fs[10];
    fd[11] = fs[11];
    fd[12] = fs[12];
    fd[13] = fs[13];
    fd[14] = fs[14];
    fd[15] = fs[15];
    fd[16] = fs[16];
    fd[17] = fs[17];

    if (field20 != 0)
        *(char*)(field20 + 4) = 1;

    extern int g_counter;
    int v = g_counter + 1;
    if (v == 0x7fffffff)
        v = 1;
    g_counter = v;
    field80 = v;
}
