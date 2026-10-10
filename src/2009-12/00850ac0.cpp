// from server: 86% by atomic.potato
struct S
{
};

int __cdecl f(void* a, void* b, void* c)
{
    if (a == 0)
        return 0;
    return ((int (__thiscall *)(void*, int, void*, void*, void*))(*(int**)a)[22])(a, 30, b, c, 0);
}
