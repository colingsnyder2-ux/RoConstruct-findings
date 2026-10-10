// from server: 85% by colin
struct S {
    int f(int a);
};

extern "C" unsigned char g_table[256];

int S::f(int a)
{
    int i;
    int j;
    int base;
    int *out;
    int result;

    result = ((int (__stdcall *)(int, int, int))((*(void ***)(a + 4))[0]))(a, 1, 0x400);

    base = (int)this;
    base = (base << 9) - 0x200;

    out = (int *)result;
    for (j = 0; j < 16; j++) {
        for (i = 0; i < 16; i++) {
            int v = g_table[j * 16 + i];
            int num = 0xfe01 - v * 0x1fe;
            out[i] = num / base;
        }
        out += 16;
    }

    return result;
}
