// from server: 33% by atomic.potato
extern "C" void __cdecl func_006a11a0(
    int, int, int, int, int, int, int, int);

void func_006a3d70(int a, int b, int c, int d, int e, int f, int g, int h)
{
    volatile int x = a;
    func_006a11a0(x, b, c, d, e, f, g, h);
}
