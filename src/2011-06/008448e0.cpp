// from server: 60% by atomic.potato
struct S
{
    S();
    int value;
    int a;
    int b;
    float c;
    int d;
    int e;
    int f;
    int g;
};

extern "C" void init(void *);

S::S()
{
    value = 0xac62c8;
    init((char *)this + 4);
    init((char *)this + 16);
    c = *(float *)0xa75b68;
}
