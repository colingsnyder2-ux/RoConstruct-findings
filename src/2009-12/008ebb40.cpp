// from server: 51% by atomic.potato
struct S
{
    int field_100;
    void f();
};

void S::f()
{
    struct VTable
    {
        void (__thiscall *method)(void *, int);
    };

    VTable *vtable = *(VTable **)((char *)this + 0x100);
    if (vtable != 0)
        vtable->method((void *)field_100, 0);
}
