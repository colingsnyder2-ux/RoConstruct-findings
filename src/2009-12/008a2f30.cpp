// from server: 77% by atomic.potato
struct S
{
    int f(int);
    int* items;
    int count;
};

extern "C" int __declspec(noreturn) invalid_index();

int S::f(int index)
{
    if (index < 0 || index >= count)
        return invalid_index();
    return items[index];
}
