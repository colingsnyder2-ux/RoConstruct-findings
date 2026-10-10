// from server: 23% by atomic.potato
extern "C" void __cdecl RaiseInvalidIndex();

struct S
{
    int* items;
    int count;
    int Get(int index);
};

int S::Get(int index)
{
    if (index < 0 || index >= count)
        RaiseInvalidIndex();
    return items[index];
}
