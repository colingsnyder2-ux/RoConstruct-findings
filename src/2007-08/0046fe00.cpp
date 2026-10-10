// from server: 54% by colin
struct S {
    void f(double scale, int count);
};

void S::f(double scale, int count)
{
    unsigned char table[256];
    int i;
    for (i = 0; i < 256; ++i) {
        int v = (int)((double)i * scale);
        if (v <= 0)
            v = 0;
        else if (v >= 255)
            v = 255;
        table[i] = (unsigned char)v;
    }

    int j = 0;
    if (count > 0) {
        unsigned char* p = (unsigned char*)this;
        do {
            p[j] = table[p[j]];
            p[j + 1] = table[p[j + 1]];
            p[j + 2] = table[p[j + 2]];
            j += 3;
            j += count;
        } while (j < count);
    }
}
