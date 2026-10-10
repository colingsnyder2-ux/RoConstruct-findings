// from server: 43% by atomic.potato
struct AggregateChunk
{
    void f(void *, void *);
};

extern void G1_func_00553650(AggregateChunk *, void *, void *);

void AggregateChunk::f(void *a, void *b)
{
    G1_func_00553650(this, a, b);
}
