// from server: 62% by atomic.potato
struct CComContainedObject {
    void *vtable;
};

int __cdecl get(void *p)
{
    p = *(void **)((char *)p + 0x18);
    return ((int (__thiscall *)(void *))(*(void ***)p)[2])(p);
}
