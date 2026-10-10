// from server: 93% by atomic.potato
struct S
{
    int __stdcall Release();
};

int __stdcall S::Release()
{
    --*(int *)((char *)this + 8);
    int count = *(int *)((char *)this + 8);
    if (count == 0 && this != 0)
    {
        typedef void (__thiscall *Fn)(S *, int);
        Fn fn = *(Fn *)(*(int *)this + 0x10);
        fn(this, 1);
    }
    return count;
}
