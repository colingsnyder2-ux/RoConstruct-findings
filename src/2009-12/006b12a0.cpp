// from server: 60% by atomic.potato
extern "C" void __cdecl sub_006b1240(unsigned char *);

struct S
{
    void f(unsigned char *);
};

void S::f(unsigned char *out)
{
    unsigned char value[4];
    sub_006b1240(value);
    out[0] = value[0];
    out[1] = value[3];
    out[2] = value[1];
}
