extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl freeMemory(void*);

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Link
{
    Link* next;
};

struct Node
{
    int value;
    Control* control;
    char padding[104];
    Link link;
};

struct S
{
    char padding0[8];
    unsigned int count;
    char padding1[8];
    Link** buckets;

    void clear();
};

void S::clear()
{
    Link** bucket = buckets;
    Link** end = bucket + count;

    if (bucket == end)
        return;

    for (; bucket != end; ++bucket)
    {
        Link* current = *bucket;
        while (current != reinterpret_cast<Link*>(bucket))
        {
            Node* node = reinterpret_cast<Node*>(
                reinterpret_cast<char*>(current) - 0x70);
            Control* control = node->control;
            Link* next = current->next;

            if (control)
            {
                if (_InterlockedDecrement(&control->strong) == 0)
                {
                    control->dispose();
                    if (_InterlockedDecrement(&control->weak) == 0)
                        control->destroy();
                }
            }

            freeMemory(node);
            current = next;
        }
    }
}
