// from server: 55% by atomic.potato
struct S
{
    unsigned char f();
};

extern "C" float __fastcall G1_func_007ab930(S *);

extern float G1_global_009b4784;

unsigned char S::f()
{
    float a = G1_func_007ab930(this);
    return a > G1_global_009b4784;
}
