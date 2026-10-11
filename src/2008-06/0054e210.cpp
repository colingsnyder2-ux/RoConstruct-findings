// from server: 46% by atomic.potato
struct Mesh
{
    int f(int, int);
};

extern "C" int __cdecl sub_54f870(Mesh *, int);
extern "C" int __cdecl sub_54e320(int, int);

int Mesh::f(int a, int b)
{
    return sub_54e320(a, sub_54f870(this, b));
}
