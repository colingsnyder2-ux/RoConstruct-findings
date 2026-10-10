// from server: 34% by atomic.potato
struct AggregateChunk {
    int get(int value);
};

int AggregateChunk::get(int value)
{
    return *(int *)this;
}
