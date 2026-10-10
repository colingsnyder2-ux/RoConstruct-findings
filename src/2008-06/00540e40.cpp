// from server: 46% by atomic.potato
extern "C" void __stdcall sub_005425f0(void *, int);

struct Bucket
{
    int f(void *);
};

int Bucket::f(void *p)
{
    sub_005425f0(this, *(int *)p);
    return (int)this;
}
