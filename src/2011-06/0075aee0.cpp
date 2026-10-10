// from server: 45% by atomic.potato
extern "C" void __cdecl EnterCriticalSection(void *);
extern "C" void __cdecl LeaveCriticalSection(void *);

struct BlockBlockContact
{
    void f(int *value);
};

void BlockBlockContact::f(int *value)
{
    int *object = (int *)0x45f630;
    EnterCriticalSection(object);
    *value = object[6];
    object[6] = (int)value;
    LeaveCriticalSection(object);
}
