// from server: 84% by atomic.potato
extern "C" void bad_cast_copy(void *, const void *);

struct S
{
    S(const S &);
    int v0;
    int v1;
    int v2;
    int v3;
};

S::S(const S &src)
{
    bad_cast_copy(this, &src);
    v0 = 0x00a1eb6c;
    v3 = src.v3;
    v2 = src.v2;
}
