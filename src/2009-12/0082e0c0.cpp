// from server: 87% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    int* vtable = *(int**)this;
    int (__thiscall *fn)(S*, void*) = (int (__thiscall *)(S*, void*))(vtable[35]);
    return fn(this, (void*)0x82dc10);
}
