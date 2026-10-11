// from server: 60% by atomic.potato
struct P8PartInstance {
    char pad[0x18];
    int (__stdcall *fn)(int, float);
    int field1c;
    int field20;
    void method(int, float);
};

void P8PartInstance::method(int a, float b)
{
    P8PartInstance *p = (P8PartInstance *)a;
    if (p)
        p = (P8PartInstance *)((char *)p - 0x1c);
    else
        p = 0;

    int idx = this->field20;
    int *arr = *(int **)((char *)p + 0x98);
    int base = arr[idx];
    base += this->field1c;
    int (__stdcall *f)(int, float) = this->fn;
    f((int)((char *)p + base + 0x98), b);
}
