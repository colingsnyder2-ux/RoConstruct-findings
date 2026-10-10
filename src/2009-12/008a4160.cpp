// from server: 87% by atomic.potato
struct S
{
    void* Get();
};

typedef void* (__thiscall S::*GetFunction)();

struct T
{
    T* f(void* value);
};

T* T::f(void* value)
{
    S* source = *(S**)this;
    void* first = source->Get();
    T* result = ((T* (__thiscall *)(void*, void*))(*(void***)first)[0x18])(first, value);
    *(void**)((char*)value + 0x4c) = this;
    return (T*)value;
}
