// from server: 69% by atomic.potato
struct S
{
    unsigned int* data;
    unsigned int count;
    void f(unsigned int index);
};

void S::f(unsigned int index)
{
    if (index < count - 1)
    {
        unsigned int* p = data + index * 2;
        p[0] = p[1];
        p[1] = p[3];

        while (++index < count - 1)
        {
            p = data + index * 2;
            p[0] = p[1];
            p[1] = p[3];
        }
    }
    --count;
}
