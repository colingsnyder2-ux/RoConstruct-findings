// from server: 64% by atomic.potato
struct S_func_008a2f70
{
    void** p24;
    int count;
    void* at(int index);
};

void* S_func_008a2f70::at(int index)
{
    if (index < 0 || index >= count)
        return 0;
    return p24[index];
}
