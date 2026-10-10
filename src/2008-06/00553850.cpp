// from server: 39% by atomic.potato
extern "C" void Function_005444A0(void *, void *);

struct AggregateChunk
{
    char padding[12];
    void *field_0c;
    void f(void *);
};

void AggregateChunk::f(void *p)
{
    Function_005444A0(field_0c, this);
}
