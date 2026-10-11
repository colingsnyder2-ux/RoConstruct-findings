// from server: 45% by atomic.potato
struct ProfiledRakPeer
{
    unsigned int *entries;
    unsigned int count;
    void f(unsigned int index);
};

void ProfiledRakPeer::f(unsigned int index)
{
    if (index >= count)
        return;

    if (index < count - 1)
    {
        entries[index * 2] = entries[index * 2 + 2];
        entries[index * 2 + 1] = entries[index * 2 + 3];
        ++index;
        while (index < count - 1)
        {
            entries[index * 2] = entries[index * 2 + 2];
            entries[index * 2 + 1] = entries[index * 2 + 3];
            ++index;
        }
    }

    --count;
}
