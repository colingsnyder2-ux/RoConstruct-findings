// from server: 94% by colin
struct Entry
{
    void* first;
    float second;
};

void __cdecl push_heap(Entry*, int, int, Entry);

void __cdecl adjust_heap(Entry* entries, int hole, int length, Entry value)
{
    int top = hole;
    int child = hole * 2 + 2;

    while (child < length)
    {
        if (entries[child - 1].second < entries[child].second)
            --child;

        entries[hole] = entries[child];
        hole = child;
        child = child * 2 + 2;
    }

    if (child == length)
    {
        entries[hole] = entries[length - 1];
        hole = length - 1;
    }

    push_heap(entries, hole, top, value);
}
