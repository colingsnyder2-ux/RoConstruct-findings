// from server: 78% by atomic.potato
extern "C" int __cdecl fclose(void*);

struct S
{
    int __cdecl f(void*, void*);
};

int __cdecl S::f(void*, void* a)
{
    return fclose(*(void**)((char*)a + 12));
}
