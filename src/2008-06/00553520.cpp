// from server: 1% by colin
struct AggChunk {
    int f(int a, int b, int c, int d);
};

int AggChunk::f(int a, int b, int c, int d)
{
    int i = 0;
    while (b > 0) {
        b = b - 1;
        a = a + 0x28;
        i = 0;
    }
    return i;
}
