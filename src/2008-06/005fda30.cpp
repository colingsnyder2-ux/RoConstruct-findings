// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vtable;
    volatile long strong;
    volatile long weak;
};

struct S {
    void* field0;
    int field4;
    int field8;
    void invoke(void* a, void* b, void* c);
};

void S::invoke(void* a, void* b, void* c)
{
    RefCounted* rc = (RefCounted*)c;
    if (rc)
        _InterlockedExchangeAdd(&rc->strong, 1);

    char* base = (char*)b;
    int offset = *(int*)(base + 0x1c0);
    int idx = *(int*)((char*)this + 8);
    int delta = *(int*)(offset + idx);
    delta += *(int*)((char*)this + 4);
    void (*fn)(void*) = *(void (**)(void*))this;
    fn(base + 0x1c0 + delta);

    if (rc)
    {
        if (_InterlockedExchangeAdd(&rc->strong, -1) == 1)
        {
            void (*dtor)(void*) = *(void (**)(void*))rc->vtable;
            dtor(rc);
            if (_InterlockedExchangeAdd(&rc->weak, -1) == 1)
            {
                void (*dtor2)(void*) = *(void (**)(void*))((char*)rc->vtable + 8);
                dtor2(rc);
            }
        }
    }
}
