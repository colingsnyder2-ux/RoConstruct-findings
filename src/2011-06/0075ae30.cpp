// from server: 94% by atomic.potato
extern "C" void __stdcall EnterCriticalSection(void *);
extern "C" void __stdcall LeaveCriticalSection(void *);

extern "C" void *GetBlockContact();

struct BlockBlockContact
{
};

void * __cdecl setValue(void *value)
{
    void *object = GetBlockContact();
    EnterCriticalSection(object);
    void *old = *(void **)((char *)object + 0x18);
    *(void **)value = old;
    *(void **)((char *)object + 0x18) = value;
    LeaveCriticalSection(object);
    return 0;
}
