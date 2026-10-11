// from server: 51% by atomic.potato
extern "C" int __stdcall sub_4c1ca0(int);
extern "C" int sub_4c4d80(int, int, int);

struct RbxCluster
{
    int f(int, int, int);
};

int RbxCluster::f(int a, int b, int c)
{
    int x = 0;
    x = sub_4c1ca0(x);
    sub_4c4d80(x, a, b);
    return a;
}
