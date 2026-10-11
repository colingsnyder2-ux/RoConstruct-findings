// from server: 23% by atomic.potato
struct AggregateChunk
{
    int value;
    void *f();
};

extern "C" void ViewNewTexture(void *, void *);

void *AggregateChunk::f()
{
    int state = 0;
    ViewNewTexture((char *)this + 0x28, (void *)this);
    state |= 1;
    return this;
}
