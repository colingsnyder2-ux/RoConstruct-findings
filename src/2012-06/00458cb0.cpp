// from server: 72% by atomic.potato
struct S
{
    int f(void*, void*);
    int* a;
};

typedef int (__thiscall *Fn)(void*, void*);

int S::f(void* p, void* q)
{
    int* x = p ? (int*)((char*)p + 0x1c) : 0;
    char* t = (char*)a[0x130 / 4];
    t = *(char**)(t + 0x28);
    Fn fn = *(Fn*)(*(int**)t + 0x0c);
    return fn((void*)x, q);
}
