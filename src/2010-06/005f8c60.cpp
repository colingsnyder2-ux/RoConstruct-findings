// from server: 41% by atomic.potato
extern "C" void __cdecl func_0041c510();

struct Target_005f7720
{
    void method(int, int, int, int, int);
};

struct RBX_LegacyHopperService
{
    int method(int a, int b, int c, int d, int e);
};

int RBX_LegacyHopperService::method(int a, int b, int c, int d, int e)
{
    int local = 0;
    func_0041c510();
    ((Target_005f7720*)local)->method(a, b, c, d, e);
    return a;
}
