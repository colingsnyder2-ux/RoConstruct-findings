// from server: 70% by colin
struct S {
    void f(int, int);
};

extern int g_count;
extern "C" void __stdcall sub_659670(int, int, int);
extern "C" void __stdcall sub_6597D0(void*);

void S::f(int a, int b)
{
    int local[4];
    int i = a + 1;
    local[0] = (int)this;
    if (i >= g_count)
        return;
    int* p = (int*)b;
    int j = i - a;
    do {
        int v0 = p[0];
        int v1 = p[1];
        int v2 = p[2];
        int c = j;
        v2 >>= c;
        v0 >>= c;
        v1 >>= c;
        local[1] = v2;
        int t0 = v2 * 0x4f9ffb7;
        local[2] = v0;
        int t1 = v0 * 0x466f45d;
        local[3] = v1;
        int t2 = v1 * 0x127409f;
        int mask = 0xffff >> i;
        int h = (t0 ^ t1 ^ t2) & mask;
        sub_659670(i, h, (int)local);
        int e0 = p[0];
        int e1 = p[1];
        int e2 = p[2];
        int sh = j - 1;
        e2 >>= sh;
        e1 >>= sh;
        e2 &= 1;
        e1 &= 1;
        int idx = e1 + e2 * 2;
        e0 >>= sh;
        e0 &= 1;
        idx = e0 + idx * 2;
        unsigned char bit = 1 << idx;
        bit = ~bit;
        ((unsigned char*)h)[0x12] &= bit;
        ((unsigned short*)h)[idx] = 0xffff;
        if (*(int*)(h + 0x14) == 0) {
            if (((unsigned char*)h)[0x12] == 0) {
                sub_6597D0((void*)h);
            }
        }
        i++;
        j++;
    } while (i < g_count);
}
