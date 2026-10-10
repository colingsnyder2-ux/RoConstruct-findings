// from server: 84% by atomic.potato
extern "C" void ContactStage(void *, unsigned char, unsigned char);

struct S
{
    void reset();
};

void S::reset()
{
    void **p = *(void ***)this;
    *(unsigned int *)((char *)*p + 0x24) = 0;
    unsigned int *q = (unsigned int *)((char *)*p + 0x14);
    unsigned int v = q[0];
    q[2] = v;
    q[3] = v;
    ContactStage(*p, 1, 1);
}
