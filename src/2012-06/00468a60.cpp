// from server: 56% by atomic.potato
struct S
{
    int f(int);
};

extern "C" int sub_467090(int, int);
extern "C" int sub_76a190(S *, int *);

int S::f(int value)
{
    int v = *reinterpret_cast<int *>(sub_467090(value, value + 4));
    return sub_76a190(this, &v);
}
