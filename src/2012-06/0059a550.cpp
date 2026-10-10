// from server: 35% by atomic.potato
struct S_func_0059a550 {
    int m_data;
    int m_index;
    void f(void *out);
};

void S_func_0059a550::f(void *out)
{
    int *src = (int *)(m_data + (m_index << 4));
    int *dst = (int *)out;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}
