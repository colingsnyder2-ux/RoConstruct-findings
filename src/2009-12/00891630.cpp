// from server: 87% by atomic.potato
extern "C" int __cdecl G1_func_007f3b0c();

struct S
{
    char pad[88];
    int *items;
    int count;
    int f(int index);
};

int S::f(int index)
{
    if (index < 0 || index >= count)
        return G1_func_007f3b0c();

    return items[index];
}
