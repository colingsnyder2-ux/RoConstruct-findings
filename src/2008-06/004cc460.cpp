// from server: 72% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl freeMemory(void*);

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Link
{
    Link* next;
};

struct Node
{
    void* value;
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

    for (; bucket != end; ++bucket)
    {
        Link* current = *bucket;
        while (current != reinterpret_cast<Link*>(bucket))
        {
            Node* node = reinterpret_cast<Node*>(
                reinterpret_cast<char*>(current) - 112);
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
