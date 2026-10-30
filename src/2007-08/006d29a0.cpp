// from server: 95% by colin
struct S_func_006d29a0
{
    char pad[0x24];
    int* data;
    int count;
    void setAt(int index, int value);
};

void S_func_006d29a0::setAt(int index, int value)
{
    if (index < 0 || index >= count)
    {
        extern void __cdecl fail_0062ff20();
        fail_0062ff20();
        return;
    }
    data[index] = value;
}
