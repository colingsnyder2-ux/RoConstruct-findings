// from server: 23% by atomic.potato
struct Bucket
{
    int value;
    void f(void *);
};

struct PartChunk
{
    PartChunk(void *, int);
};

void Bucket::f(void *p)
{
    int flag = 0;
    PartChunk(p, value);
    flag |= 1;
}
