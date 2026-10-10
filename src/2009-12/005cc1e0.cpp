// from server: 58% by atomic.potato
struct AggregateChunk
{
    void SetValue(float value);
};

void AggregateChunk::SetValue(float value)
{
    *(float*)((char*)this + 0x5c) = value;
}
