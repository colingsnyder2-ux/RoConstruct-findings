// from server: 46% by atomic.potato
struct Mesh
{
    int f(int, int);
};

extern "C" int sub_54eb30(Mesh *, int);
extern "C" int sub_54e320(int, int);

int Mesh::f(int a, int b)
{
    return a = sub_54e320(a, sub_54eb30(this, b));
}
