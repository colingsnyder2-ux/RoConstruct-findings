// from server: 30% by colin
struct Sub
{
    void destroy();
};

struct S
{
    char pad[0x8c];
    Sub sub8c;
    char pad2[0x18];
    Sub suba8;
    void destroy();
};

void S::destroy()
{
    suba8.destroy();
    sub8c.destroy();
}
