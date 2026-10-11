// from server: 88% by atomic.potato
extern "C" void EventDescDispatch(void *);

struct EventDesc
{
    unsigned long offset;
    unsigned long index;
    void Set(void *);
};

void EventDesc::Set(void *value)
{
    unsigned char *base = (unsigned char *)value;
    if (base)
        base -= 0x1c;
    else
        base = 0;

    unsigned long table = *(unsigned long *)(base + 0x138);
    unsigned long entry = *(unsigned long *)(table + index);
    unsigned long address = entry + offset + (unsigned long)base + 0x138;
    EventDescDispatch((void *)address);
}
