// from server: 85% by colin
struct RakPeer
{
    void func_004c1d60(int* out);
    void func_004c1bb0(int* a, int* b);
    void func_004c3830();
};

void RakPeer::func_004c3830()
{
    int a;
    int b;
    int c;

    func_004c1d60(&b);
    func_004c1d60(&a);
    func_004c1bb0(&c, &b);
}
