// from server: 32% by atomic.potato
struct S
{
    int f(int *);
    char data[48];
};

extern "C" void TextureInit(void *, void *);

int S::f(int *p)
{
    int x = 0;
    TextureInit(data + 44, p);
    x |= 1;
    return (int)p;
}
