// from server: 25% by atomic.potato
struct CleanStage
{
    int GetValue();
    void Process(void *);
    void *field4;
    void *field8;
};

int CleanStage::GetValue()
{
    return 0;
}

void CleanStage::Process(void *value)
{
    if (*(int *)((char *)value + 4) > GetValue())
        ((void (__thiscall *)(void *, void *))(*(int **)((char *)field8))[20])(field8, value);
}
