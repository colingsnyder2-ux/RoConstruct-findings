// from server: 79% by atomic.potato
struct S
{
    struct VTable
    {
        void (__thiscall *fn)(void*, void*);
    };

    void* field_278;

    int method(int value);
};

int S::method(int value)
{
    void* object;
    object = *(void**)((char*)this + 0x278);
    ((void (__thiscall *)(void*, void*))(*(unsigned int**)*(unsigned int*)object + 0x15c))(object, (void*)value);
    return value;
}
