// from server: 68% by atomic.potato
extern "C" int G1_func_00713880();
struct G2_type_00714a80
{
    int G2_func_00714a80(int, int, int, int);
};
extern "C" int __stdcall G3_func_007f4929(int);

int func_009784a0()
{
    G2_type_00714a80 *p = (G2_type_00714a80 *)0xb955b8;
    p->G2_func_00714a80(0, G1_func_00713880(), 0, 0);
    return G3_func_007f4929(0x987b40);
}
