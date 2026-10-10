// from server: 23% by atomic.potato
struct S {
    int** items;
    int count;
    int* f(int index);
};

extern "C" void __cdecl func_006a0944();

int* S::f(int index)
{
    if (index < 0 || index >= count)
        func_006a0944();
    return items[index];
}
