// from server: 80% by atomic.potato
struct S
{
    int f(int);
};

int S::f(int value)
{
    int* vtable = *(int**)this;
    int target = *(int*)value;
    int offset = *(int*)((char*)vtable + 0xe8);
    *(int*)&value = target;
    return ((int (__thiscall *)(S*, int))offset)(this, value);
}
