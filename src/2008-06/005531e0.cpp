// from server: 29% by atomic.potato
struct AggregateChunk
{
    int f(int, int, int);
};

extern "C" void __cdecl sub_5533e0(int, int, int, int);

int AggregateChunk::f(int a, int b, int c)
{
    sub_5533e0(a, b, c, (int)this + 8);
    return a + b * 40;
}
