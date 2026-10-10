// from server: 69% by atomic.potato
extern "C" void __cdecl sub_00642ac0(unsigned char*);

struct seg_00640000
{
    void f(unsigned char* p);
};

void seg_00640000::f(unsigned char* p)
{
    unsigned char b[3];
    sub_00642ac0(b);
    p[0] = b[0];
    p[1] = b[2];
    p[2] = b[1];
}
