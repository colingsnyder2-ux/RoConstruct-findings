// from server: 26% by atomic.potato
struct Mesh
{
    int value;
    int f(int);
};

int Mesh::f(int x)
{
    int a = 0;
    while (a != 0)
        a = 0;

    int b = 0;
    while (b != 0)
        b = 0;

    return value + x;
}
