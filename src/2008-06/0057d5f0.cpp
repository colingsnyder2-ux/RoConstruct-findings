// from server: 89% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    struct T
    {
        int pad0[162];
        int value;
    };

    T* p = *(T**)((char*)this + 12);
    int* q = (int*)((char*)p + 648);
    typedef int (__thiscall *Fn)(int*);
    int result = ((Fn)*(void**)((char*)q + 0))(q);
    return *(int*)((char*)result + 468) == 0;
}
