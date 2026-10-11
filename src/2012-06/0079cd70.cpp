// from server: 79% by atomic.potato
extern "C" void __stdcall EventDescDispatch(void *);

struct EventDesc
{
    unsigned long pad30[12];
    unsigned long offset30;
    unsigned long offset34;
    void Dispatch(void *);
};

void EventDesc::Dispatch(void *value)
{
    unsigned char *p = (unsigned char *)value;
    unsigned long base = (unsigned long)p;

    if (p != 0)
        base -= 0x1c;

    unsigned long table = *(unsigned long *)(base + 0x138);
    unsigned long entry = *(unsigned long *)(table + offset34);
    unsigned long address = entry + offset30 + base + 0x138;

    EventDescDispatch((void *)address);
}
