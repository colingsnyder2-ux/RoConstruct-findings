// from server: 79% by atomic.potato
extern "C" void CallTarget(void *, void *);

struct EventDesc
{
    unsigned long offset30;
    unsigned long offset34;
    void *f(unsigned long *);
};

void *EventDesc::f(unsigned long *value)
{
    unsigned long *p = value ? value - 7 : 0;
    unsigned long v = *(unsigned long *)((char *)p + 0x138);
    unsigned long index = *(unsigned long *)((char *)this + 0x34);
    unsigned long base = *(unsigned long *)((char *)this + 0x30);
    void *result = (void *)((char *)v + index + base + (unsigned long)p + 0x138);
    CallTarget(this, result);
    return result;
}
