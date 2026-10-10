// from server: 92% by atomic.potato
struct S
{
    int f();
    int value;
    int argument;
};

extern "C" int __cdecl G1_func_00762360(S *);

int S::f()
{
    return G1_func_00762360((S *)argument) - 1;
}
