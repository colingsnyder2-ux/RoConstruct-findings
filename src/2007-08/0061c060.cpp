// from server: 93% by colin
struct S_func_0061c060 {
    char pad0[0x104];
    int m_x;
    int f(int a1);
};

int S_func_0061c060::f(int a1)
{
    extern int __stdcall sub_00600ad0(int, int);
    sub_00600ad0((int)(this->pad0 + 0x104), a1);
    return a1;
}
