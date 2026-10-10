// from server: 90% by atomic.potato
struct S
{
    int offset;
    int* object;
    int f(int value);
};

int S::f(int value)
{
    int target = offset + value;
    int* vtable = *(int**)object;
    int (__thiscall *method)(int*, int) =
        (int (__thiscall *)(int*, int))vtable[61];
    method(object, target);
    return offset;
}
