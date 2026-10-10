// from server: 92% by atomic.potato
struct S_func_004dd280
{
    void __cdecl reverse_copy(char *source, unsigned int count, char *destination);
};

void S_func_004dd280::reverse_copy(char *source, unsigned int count, char *destination)
{
    unsigned int i = 0;
    if (count != 0)
    {
        source += count - 1;
        do
        {
            destination[i] = *source--;
            ++i;
        } while (i < count);
    }
}
