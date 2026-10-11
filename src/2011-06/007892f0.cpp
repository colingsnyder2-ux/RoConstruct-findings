// from server: 97% by atomic.potato
extern "C" void* __cdecl helper(void*);
extern "C" int (__thiscall *imported_compare)(void*, void*);

struct S
{
    int f();
};

int S::f()
{
    int* a = *(int**)((char*)this + 12);
    void* b = *(void**)((char*)a + 2764);
    void* c = *(void**)((char*)b + 392);
    if (c)
    {
        void* d = helper(c);
        return imported_compare((void*)0xC9126C, d);
    }
    return 0;
}
