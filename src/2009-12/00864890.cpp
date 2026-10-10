// from server: 56% by atomic.potato
struct S
{
    void SetValue(void *value);
};

typedef void (__thiscall *SetValueProc)(void *, void *);

extern SetValueProc g_SetValue;

void S::SetValue(void *value)
{
    *(void **)((char *)this + 0xe0) = value;
    if (value)
        g_SetValue((char *)this + 0xa4, 0);
}
