// from server: 82% by atomic.potato
struct TToolVerb
{
    int f();
};

typedef int (__cdecl *CompareTypeInfo)(const void *, const void *);
typedef int (__thiscall *GlobalCall)(void *, int);

extern "C" int __cdecl sub_7f5286(int);
extern "C" int __cdecl imported_98b768(void *, int);

int TToolVerb::f()
{
    int *a = *(int **)((char *)this + 12);
    void *b = *(void **)((char *)a + 0xA90);
    int v = *(int *)((char *)b + 0x1B4);
    if (!v)
        return 0;
    v = sub_7f5286(v);
    return imported_98b768((void *)0xB3F9FC, v);
}
