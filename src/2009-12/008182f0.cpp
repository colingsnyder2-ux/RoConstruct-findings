// from server: 69% by atomic.potato
struct S
{
    void f(void*);
};

void S::f(void* p)
{
    struct VTable
    {
        void* entries[117];
    };

    struct Object
    {
        VTable* vtable;
    };

    VTable* v0 = *(VTable**)this;
    Object* a = ((Object* (__thiscall*)(void*))v0->entries[101])(this);
    Object* b = *(Object**)p;
    ((void (__thiscall*)(Object*, int))((VTable*)a->vtable)->entries[95])(a,
        ((int (__thiscall*)(Object*))b->vtable->entries[0])((Object*)p));
}
