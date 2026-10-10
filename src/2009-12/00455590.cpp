// from server: 53% by atomic.potato
struct ExitCommand
{
    void *Get();
};

void *ExitCommand::Get()
{
    void *p = *(void **)((char *)this + 0x78);
    if (p)
        return **(void ***)p;
}
