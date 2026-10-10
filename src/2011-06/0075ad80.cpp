// from server: 56% by atomic.potato
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

struct BlockBlockContact
{
    int *getValue();
};

int *BlockBlockContact::getValue()
{
    int *value = (int *)0;
    EnterCriticalSection((void *)0);
    value = *(int **)((char *)this + 0x18);
    *(int **)((char *)this + 0x18) = value;
    LeaveCriticalSection((void *)0);
    return value;
}
