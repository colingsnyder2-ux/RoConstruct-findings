// from server: 37% by atomic.potato
extern "C" void __stdcall CNameItem(void *, int, int);

struct AggregateChunk
{
    int f();
};

int AggregateChunk::f()
{
    CNameItem(this, 0, 0);
    return (int)this;
}
