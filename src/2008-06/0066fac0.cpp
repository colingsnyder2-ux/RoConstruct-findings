// from server: 28% by atomic.potato
struct S {
    void f(const S *p);
    unsigned char data[0x118];
};

void S::f(const S *p)
{
    unsigned long *d = (unsigned long *)(data + 0x114);
    const unsigned long *s = (const unsigned long *)p;
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    d[4] = s[4];
    d[5] = s[5];
    d[6] = s[6];
    d[7] = s[7];
    d[8] = s[8];
    *(float *)(data + 0x138) = *(const float *)((const unsigned char *)p + 0x24);
    *(float *)(data + 0x13c) = *(const float *)((const unsigned char *)p + 0x28);
    *(float *)(data + 0x140) = *(const float *)((const unsigned char *)p + 0x2c);
}
